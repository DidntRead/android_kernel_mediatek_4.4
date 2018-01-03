#include <linux/init.h>
#include <linux/module.h>
#include <linux/hrtimer.h>
#include <linux/cpu.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/profile.h>
#include <linux/dcache.h>
#include <linux/types.h>
#include <linux/dcookies.h>
#include <linux/sched.h>
#include <linux/fs.h>

#include <asm/irq_regs.h>

#include "met_struct.h"
#include "met_drv.h"
#include "met_kernel_symbol.h"
#include <linux/printk.h>
#include <linux/of.h>

#define PLATFORM_NAME   "mt6771"
#define ONE_CLUSTER "LL:0,1,2,3"
#define TWO_CLUSTER "LL:0,1,2,3|L:4,5,6,7"
#define TRI_CLUSTER "LL:0,1,2,3|L:4,5,6,7|B:8,9"

void (*tracing_record_cmdline_symbol)(struct task_struct *tsk);
void (*met_cpu_frequency_symbol)(unsigned int frequency, unsigned int cpu_id);
int (*met_reg_switch_symbol)(void);
void (*met_unreg_switch_symbol)(void);

void (*met_arch_setup_dma_ops_symbol)(struct device *dev);
u64 (*met_perf_event_read_local_symbol)(struct perf_event *ev);
struct task_struct *(*met_kthread_create_on_cpu_symbol)(int (*threadfn)(void *data),
				void *data, unsigned int cpu,
				const char *namefmt);

static int check_cluster_num(void)
{
	struct device_node *node = NULL;
	int num = 0;

	node = of_find_node_by_name(NULL, "cluster0");
	if (node)
		num++;

	node = of_find_node_by_name(NULL, "cluster1");
	if (node)
		num++;

	node = of_find_node_by_name(NULL, "cluster2");
	if (node)
		num++;

	return num;
}

static int met_kernel_symbol_get(void)
{
	int ret = 0;

	if (tracing_record_cmdline_symbol == NULL)
		tracing_record_cmdline_symbol = (void *)symbol_get(met_tracing_record_cmdline);
	if (tracing_record_cmdline_symbol == NULL)
		ret = -3;

	if (met_cpu_frequency_symbol == NULL)
		met_cpu_frequency_symbol = (void *)symbol_get(met_cpu_frequency);
	if (met_cpu_frequency_symbol == NULL)
		ret = -4;

	if (met_reg_switch_symbol == NULL)
		met_reg_switch_symbol = (void *)symbol_get(met_reg_switch);
	if (met_reg_switch_symbol == NULL)
		ret = -5;

	if (met_unreg_switch_symbol == NULL)
		met_unreg_switch_symbol = (void *)symbol_get(met_unreg_switch);
	if (met_unreg_switch_symbol == NULL)
		ret = -6;

	if (met_arch_setup_dma_ops_symbol == NULL)
		met_arch_setup_dma_ops_symbol = (void *)symbol_get(met_arch_setup_dma_ops);
	if (met_arch_setup_dma_ops_symbol == NULL)
		ret = -7;

	if (met_perf_event_read_local_symbol == NULL)
		met_perf_event_read_local_symbol = (void *)symbol_get(met_perf_event_read_local);
	if (met_perf_event_read_local_symbol == NULL)
		ret = -8;

	if (met_kthread_create_on_cpu_symbol == NULL)
		met_kthread_create_on_cpu_symbol = (void *)symbol_get(met_kthread_create_on_cpu);
	if (met_kthread_create_on_cpu_symbol == NULL)
		ret = -9;

	return ret;
}

DEFINE_PER_CPU(struct met_cpu_struct, met_cpu);

static int __init met_drv_init(void)
{
	int cpu;
	int ret;
	int num;
	struct met_cpu_struct *met_cpu_ptr;

	for_each_possible_cpu(cpu) {
		met_cpu_ptr = &per_cpu(met_cpu, cpu);
		/* snprintf(&(met_cpu_ptr->name[0]), sizeof(met_cpu_ptr->name), "met%02d", cpu); */
		met_cpu_ptr->cpu = cpu;
	}

	ret = met_kernel_symbol_get();
	if (ret)
		return ret;
	fs_reg();

	met_set_platform(PLATFORM_NAME, 1);
	num = check_cluster_num();
	if (num == 1)
		met_set_topology(ONE_CLUSTER, 1);
	else if (num == 2)
		met_set_topology(TWO_CLUSTER, 1);
	else
		met_set_topology(TRI_CLUSTER, 1);

	core_plf_init();

	return 0;
}

static void __exit met_drv_exit(void)
{
	if (met_cpu_frequency_symbol)
		symbol_put(met_cpu_frequency);
	if (met_reg_switch_symbol)
		symbol_put(met_reg_switch);
	if (met_unreg_switch_symbol)
		symbol_put(met_unreg_switch);
	if (tracing_record_cmdline_symbol)
		symbol_put(met_tracing_record_cmdline);

	core_plf_exit();
	fs_unreg();

}
module_init(met_drv_init);
module_exit(met_drv_exit);

MODULE_AUTHOR("DT_DM5");
MODULE_DESCRIPTION("MET_CORE");
MODULE_LICENSE("GPL");
