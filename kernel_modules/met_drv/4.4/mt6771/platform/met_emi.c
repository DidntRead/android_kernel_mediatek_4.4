#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/device.h>
#include <linux/miscdevice.h>
#include <linux/module.h>
#include <linux/dma-mapping.h>
#include <linux/string.h>

#define MET_USER_EVENT_SUPPORT
#include "core/met_drv.h"
#include "core/trace.h"

#include "mtk_typedefs.h"
#include "core_plf_init.h"
/* #include "plf_trace.h" */
#include "mtk_emi_bm.h"

#ifdef CONFIG_MTK_TINYSYS_SSPM_SUPPORT
#include "sspm/ondiemet_sspm.h"
#endif

/*======================================================================*/
/*	Global variable definitions					*/
/*======================================================================*/
static int msel_enable;
static unsigned int msel_group1 = BM_Master_GP_1_Default;
static unsigned int msel_group2 = BM_Master_GP_2_Default;
static unsigned int msel_group3 = BM_Master_GP_3_Default;

/* Global variables */
static struct kobject *kobj_emi;
static int rwtype = BM_BOTH_READ_WRITE;
/*======================================================================*/
/*	EMI Test Operations						*/
/*======================================================================*/
static int times;
static ssize_t test_apmcu_store(struct kobject *kobj,
				struct kobj_attribute *attr,
				const char *buf,
				size_t n)
{
	int i;
	unsigned int    *src_addr_v;
	dma_addr_t src_addr_p;

	if ((n == 0) || (buf == NULL))
		return -EINVAL;
	if (kstrtoint(buf, 10, &times) != 0)
		return -EINVAL;
	if (times < 0)
		return -EINVAL;

	if (times > 5000)       /* Less than 20MB */
		return -EINVAL;

	/* dma_alloc */
	src_addr_v = dma_alloc_coherent(met_device.this_device,
					PAGE_SIZE,
					&src_addr_p,
					GFP_KERNEL);
	if (src_addr_v == NULL) {
#ifdef CONFIG_MET_MODULE
		met_tag_oneshot_real(0, "test_apmcu dma alloc fail", PAGE_SIZE);
#else
		met_tag_oneshot(0, "test_apmcu dma alloc fail", PAGE_SIZE);
#endif
		return -ENOMEM;
	}
	/* testing */
	preempt_disable();
#ifdef CONFIG_MET_MODULE
	met_tag_start_real(0, "TEST_EMI_APMCU");
#else
	met_tag_start(0, "TEST_EMI_APMCU");
#endif
	for (i = 0; i < times; i++) {
		memset(src_addr_v, 2*i, PAGE_SIZE);
#ifdef CONFIG_MET_MODULE
		met_tag_oneshot_real(0, "TEST_EMI_APMCU", PAGE_SIZE);
#else
		met_tag_oneshot(0, "TEST_EMI_APMCU", PAGE_SIZE);
#endif
	}
#ifdef CONFIG_MET_MODULE
	met_tag_end_real(0, "TEST_EMI_APMCU");
#else
	met_tag_end(0, "TEST_EMI_APMCU");
#endif
	/* the following function has no defined if MET is built as module */
	/* preempt_enable_no_resched(); */
	/* use this one to replace it: see met_drv.h */
	my_preempt_enable();

	/* dma_free */
	if (src_addr_v != NULL)
		dma_free_coherent(met_device.this_device,
				  PAGE_SIZE,
				  src_addr_v,
				  src_addr_p);
	return n;
}

/*======================================================================*/
/*	KOBJ Declarations						*/
/*======================================================================*/
DECLARE_KOBJ_ATTR_INT(msel_enable, msel_enable);
DECLARE_KOBJ_ATTR_HEX_CHECK(msel_group1, msel_group1, msel_group1 > 0 && msel_group1 <= BM_MASTER_ALL);
DECLARE_KOBJ_ATTR_HEX_CHECK(msel_group2, msel_group2, msel_group2 > 0 && msel_group2 <= BM_MASTER_ALL);
DECLARE_KOBJ_ATTR_HEX_CHECK(msel_group3, msel_group3, msel_group3 > 0 && msel_group3 <= BM_MASTER_ALL);

/* KOBJ: rwtype */
DECLARE_KOBJ_ATTR_INT_CHECK(rwtype, rwtype, rwtype >= 0 && rwtype <= BM_WRITE_ONLY);
DECLARE_KOBJ_ATTR_STR_LIST_ITEM(
	ttype_rw,
	KOBJ_ITEM_LIST(
		{ BM_TRANS_RW_DEFAULT,   "DEFAULT" },
		{ BM_TRANS_RW_READONLY,  "R" },
		{ BM_TRANS_RW_WRITEONLY, "W" },
		{ BM_TRANS_RW_RWBOTH,    "BOTH" }
		)
	);

/* KOBJ: test_apmcu */
DECLARE_KOBJ_ATTR_SHOW_INT(test_apmcu, times);
/* please refer to session: "EMI Test Operations" for store operation */
DECLARE_KOBJ_ATTR(test_apmcu);

static int ttype_rw_val[4];
#define DECLARE_KOBJ_TTYPE_RW(nr) \
	DECLARE_KOBJ_ATTR_STR_LIST(ttype ## nr ## _rw, ttype_rw_val[nr - 1], ttype_rw)

DECLARE_KOBJ_TTYPE_RW(1);
DECLARE_KOBJ_TTYPE_RW(2);
DECLARE_KOBJ_TTYPE_RW(3);
DECLARE_KOBJ_TTYPE_RW(4);

/**/
#define KOBJ_ATTR_ITEM_SERIAL_FNODE(nr) \
	KOBJ_ATTR_ITEM(ttype ## nr ## _rw)

#define KOBJ_ATTR_LIST \
	do { \
		KOBJ_ATTR_ITEM(msel_enable); \
		KOBJ_ATTR_ITEM(msel_group1); \
		KOBJ_ATTR_ITEM(msel_group2); \
		KOBJ_ATTR_ITEM(msel_group3); \
		KOBJ_ATTR_ITEM(rwtype); \
		KOBJ_ATTR_ITEM_SERIAL_FNODE(1); \
		KOBJ_ATTR_ITEM_SERIAL_FNODE(2); \
		KOBJ_ATTR_ITEM_SERIAL_FNODE(3); \
		KOBJ_ATTR_ITEM_SERIAL_FNODE(4); \
		KOBJ_ATTR_ITEM(test_apmcu); \
	} while (0)

/*======================================================================*/
/*	EMI Operations							*/
/*======================================================================*/
static void emi_init(void)
{
	unsigned int bmrw0_val = 0, bmrw1_val = 0, i;
	unsigned int msel_group_val[4];

	MET_BM_SaveCfg();
	MET_BM_SetReadWriteType(rwtype);

	if (msel_enable) {
		msel_group_val[0] = BM_MASTER_ALL;
		msel_group_val[1] = msel_group1;
		msel_group_val[2] = msel_group2;
		msel_group_val[3] = msel_group3;
	} else {
		msel_group_val[0] = BM_MASTER_ALL;
		msel_group_val[1] = BM_Master_GP_1_Default;
		msel_group_val[2] = BM_Master_GP_2_Default;
		msel_group_val[3] = BM_Master_GP_3_Default;
	}

	MET_BM_SetLatencyCounter(1);    /*enable latency count*/
	for (i = 1; i <= 4; i++) {
		MET_BM_SetMonitorCounter(i,
					 msel_group_val[i - 1] & BM_MASTER_ALL,
					 BM_TRANS_TYPE_4BEAT |
					 BM_TRANS_TYPE_8Byte |
					 BM_TRANS_TYPE_BURST_WRAP);
	}

	bmrw0_val = (
		(ttype_rw_val[0] << 0) | (ttype_rw_val[1] << 2) |
		(ttype_rw_val[2] << 4) | (ttype_rw_val[3] << 6)
		);
	MET_BM_SetTtypeCounterRW(bmrw0_val, bmrw1_val);
}

static void emi_uninit(void)
{
	MET_BM_RestoreCfg();
}

static inline int do_emi(void)
{
	return met_sspm_emi.mode;
}

/*======================================================================*/
/*	MET Device Operations						*/
/*======================================================================*/
static int emi_inited;
static int met_emi_create(struct kobject *parent)
{
	int ret = 0;
	int i;

	for (i = 0; i < 4; i++)
		ttype_rw_val[i] =  BM_TRANS_RW_DEFAULT;

	ret = MET_BM_Init();
	if (ret != 0) {
		pr_debug("MET_BM_Init failed!!!\n");
		ret = 0;	/* will retry later */
	} else {
		emi_inited = 1;
	}

	kobj_emi = parent;

#define	KOBJ_ATTR_ITEM(attr_name) \
do { \
	ret = sysfs_create_file(kobj_emi, &attr_name##_attr.attr); \
	if (ret != 0) { \
		pr_debug("Failed to create " #attr_name " in sysfs\n"); \
		return ret; \
	} \
} while (0)
	KOBJ_ATTR_LIST;
#undef	KOBJ_ATTR_ITEM

	return ret;
}

static void met_emi_delete(void)
{
#define	KOBJ_ATTR_ITEM(attr_name) \
	sysfs_remove_file(kobj_emi, &attr_name##_attr.attr)
	if (kobj_emi != NULL) {
		KOBJ_ATTR_LIST;
			kobj_emi = NULL;
	}
#undef	KOBJ_ATTR_ITEM

	if (emi_inited)
		MET_BM_DeInit();
}


static void met_emi_resume(void)
{
	if (!do_emi())
		return;

	emi_init();
}

static const char help[] = "  --emi                                 monitor EMI banwidth\n";
static int emi_print_help(char *buf, int len)
{
	return snprintf(buf, PAGE_SIZE, help);
}

static int emi_print_header(char *buf, int len)
{
	int ret = 0;

	ret = snprintf(buf, PAGE_SIZE,
			"met-info [000] 0.0: met_emi_mport_map: %s,%s,%s,%s,%s,%s,%s,%s\n",
			BM_Master_M0_name, BM_Master_M1_name, BM_Master_M2_name, BM_Master_M3_name,
			BM_Master_M4_name, BM_Master_M5_name, BM_Master_M6_name, BM_Master_M7_name);

	ret += snprintf(buf + ret, PAGE_SIZE - ret,
			"met-info [000] 0.0: met_emi_mgroup_map: %x,%x,%x,%x\n",
			BM_Master_GP_AP, BM_Master_GP_MM, BM_Master_GP_GPU, BM_Master_GP_MD);

	if (msel_enable) {
		ret += snprintf(buf + ret, PAGE_SIZE - ret,
			"met-info [000] 0.0: met_emi_msel: %x,%x,%x\n",
			msel_group1 & BM_MASTER_ALL,
			msel_group2 & BM_MASTER_ALL,
			msel_group3 & BM_MASTER_ALL);
	} else {
		ret += snprintf(buf + ret, PAGE_SIZE - ret,
			"met-info [000] 0.0: met_emi_msel: %x,%x,%x\n",
			BM_Master_GP_1_Default & BM_MASTER_ALL,
			BM_Master_GP_2_Default & BM_MASTER_ALL,
			BM_Master_GP_3_Default & BM_MASTER_ALL);
	}
	return ret;
}

#ifdef CONFIG_MTK_TINYSYS_SSPM_SUPPORT

static int ondiemet_emi_print_header(char *buf, int len)
{
	return emi_print_header(buf, len);
}

static void MET_BM_IPI_configs(void)
{
	int ret, i;
	unsigned int rdata;
	unsigned int ipi_buf[4];

	for (i = 0; i < 4; i++)
		ipi_buf[i] = 0;

	if (sspm_buf_available == 1) {
		ipi_buf[0] = MET_MAIN_ID | (MID_EMI << MID_BIT_SHIFT) | MET_ARGU | SET_EBM_CONFIGS1;
		ipi_buf[1] = 0x0;
		ret = sspm_ipi_send_sync(IPI_ID_MET, IPI_OPT_WAIT, (void *)ipi_buf, 0, &rdata, 1);
	}
}

static void ondiemet_emi_start(void)
{
	if (!emi_inited) {
		if (MET_BM_Init() != 0) {
			met_sspm_emi.mode = 0;
			pr_err("MET_BM_Init failed!!!\n");
			return;
		}
		emi_inited = 1;
	}
	MET_BM_IPI_configs();

	if (do_emi())
		emi_init();

	ondiemet_module[ONDIEMET_SSPM] |= ID_EMI;
}

static void ondiemet_emi_stop(void)
{
	if (!emi_inited)
		return;

	if (do_emi())
		emi_uninit();
}
#endif

struct metdevice met_sspm_emi = {
	.name			= "emi",
	.owner			= THIS_MODULE,
	.type			= MET_TYPE_BUS,
	.create_subfs		= met_emi_create,
	.delete_subfs		= met_emi_delete,
	.resume			= met_emi_resume,
#ifdef CONFIG_MTK_TINYSYS_SSPM_SUPPORT
	.ondiemet_start		= ondiemet_emi_start,
	.ondiemet_stop		= ondiemet_emi_stop,
	.ondiemet_print_help	= emi_print_help,
	.ondiemet_print_header	= ondiemet_emi_print_header,
#endif
	.ondiemet_mode		= 1,
};
EXPORT_SYMBOL(met_sspm_emi);
