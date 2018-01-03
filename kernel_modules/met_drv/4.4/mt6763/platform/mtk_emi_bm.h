#ifndef __MT_MET_EMI_BM_H__
#define __MT_MET_EMI_BM_H__


#define	ADDR_EMI		((unsigned long) BaseAddrEMI)

#define BM_Master_M0_name	"m0_APMCU0"
#define BM_Master_M1_name	"m1_APMCU1"
#define BM_Master_M2_name	"m2_MM1"
#define BM_Master_M3_name	"m3_MDMCU"
#define BM_Master_M4_name	"m4_PERI/MDHW"
#define BM_Master_M5_name	"m5_MM0"
#define BM_Master_M6_name	"m6_GPU0"
#define BM_Master_M7_name	"m7_GPU1"

#define BM_Master_GP_AP	(BM_MASTER_M0 | BM_MASTER_M1)
#define BM_Master_GP_MM	(BM_MASTER_M2 | BM_MASTER_M5)
#define BM_Master_GP_GPU	(BM_MASTER_M6 | BM_MASTER_M7)
#define BM_Master_GP_MD	(BM_MASTER_M3 | BM_MASTER_M4)

#define BM_Master_GP_1_Default	BM_Master_GP_AP
#define BM_Master_GP_2_Default	BM_Master_GP_MM
#define BM_Master_GP_3_Default	BM_Master_GP_GPU

#define BM_MASTER_M0		(0x01)
#define BM_MASTER_M1		(0x02)
#define BM_MASTER_M2		(0x04)
#define BM_MASTER_M3		(0x08)
#define BM_MASTER_M4		(0x10)
#define BM_MASTER_M5		(0x20)
#define BM_MASTER_M6		(0x40)
#define BM_MASTER_M7		(0x80)
#define BM_MASTER_ALL		(0xFF)

enum BM_RW_Type {
	BM_BOTH_READ_WRITE,
	BM_READ_ONLY,
	BM_WRITE_ONLY
};

enum {
	BM_TRANS_TYPE_1BEAT = 0x0,
	BM_TRANS_TYPE_2BEAT,
	BM_TRANS_TYPE_3BEAT,
	BM_TRANS_TYPE_4BEAT,
	BM_TRANS_TYPE_5BEAT,
	BM_TRANS_TYPE_6BEAT,
	BM_TRANS_TYPE_7BEAT,
	BM_TRANS_TYPE_8BEAT,
	BM_TRANS_TYPE_9BEAT,
	BM_TRANS_TYPE_10BEAT,
	BM_TRANS_TYPE_11BEAT,
	BM_TRANS_TYPE_12BEAT,
	BM_TRANS_TYPE_13BEAT,
	BM_TRANS_TYPE_14BEAT,
	BM_TRANS_TYPE_15BEAT,
	BM_TRANS_TYPE_16BEAT,
	BM_TRANS_TYPE_1Byte = 0 << 4,
	BM_TRANS_TYPE_2Byte = 1 << 4,
	BM_TRANS_TYPE_4Byte = 2 << 4,
	BM_TRANS_TYPE_8Byte = 3 << 4,
	BM_TRANS_TYPE_16Byte = 4 << 4,
	BM_TRANS_TYPE_32Byte = 5 << 4,
	BM_TRANS_TYPE_BURST_WRAP = 0 << 7,
	BM_TRANS_TYPE_BURST_INCR = 1 << 7
};

enum {
	BM_TRANS_RW_DEFAULT = 0x0,
	BM_TRANS_RW_READONLY,
	BM_TRANS_RW_WRITEONLY,
	BM_TRANS_RW_RWBOTH
};


#define BM_COUNTER_MAX				(21)
#define BM_REQ_OK						(0)
#define BM_ERR_WRONG_REQ				(-1)
#define BM_ERR_OVERRUN					(-2)

#ifdef CONFIG_MTK_TINYSYS_SSPM_SUPPORT
/*ondiemet emi ipi command*/
enum BM_EMI_IPI_Type {
	SET_BASE_EMI = 0x0,
	SET_BASE_DRAMC0,
	SET_BASE_DRAMC1,
	SET_BASE_DRAMC2,
	SET_BASE_DRAMC3,
	SET_BASE_DDRPHY0AO,
	SET_BASE_DRAMC0_AO,
	SET_EBM_CONFIGS1,
	SET_EBM_CONFIGS2,
};
#endif

#define	EMI_OFF			0x0000
#define EMI_BMEN		(0x400-EMI_OFF)
#define EMI_MSEL		(0x440-EMI_OFF)
#define EMI_MSEL2		(0x468-EMI_OFF)
#define EMI_MSEL3		(0x470-EMI_OFF)
#define EMI_MSEL4		(0x478-EMI_OFF)
#define EMI_MSEL5		(0x480-EMI_OFF)
#define EMI_MSEL6		(0x488-EMI_OFF)
#define EMI_MSEL7		(0x490-EMI_OFF)
#define EMI_MSEL8		(0x498-EMI_OFF)
#define EMI_MSEL9		(0x4A0-EMI_OFF)
#define EMI_MSEL10		(0x4A8-EMI_OFF)

#define EMI_BMID0		(0x4B0-EMI_OFF)
#define EMI_BMID1		(0x4B4-EMI_OFF)
#define EMI_BMID2		(0x4B8-EMI_OFF)
#define EMI_BMID3		(0x4BC-EMI_OFF)
#define EMI_BMID4		(0x4C0-EMI_OFF)
#define EMI_BMID5		(0x4C4-EMI_OFF)
#define EMI_BMID6		(0x4C8-EMI_OFF)
#define EMI_BMID7		(0x4CC-EMI_OFF)
#define EMI_BMID8		(0x4D0-EMI_OFF)
#define EMI_BMID9		(0x4D4-EMI_OFF)
#define EMI_BMID10		(0x4D8-EMI_OFF)

#define EMI_BMEN1		(0x4E0-EMI_OFF)
#define EMI_BMEN2		(0x4E8-EMI_OFF)
#define EMI_BMRW0		(0x4F8-EMI_OFF)
#define EMI_BMRW1		(0x4FC-EMI_OFF)


extern int MET_BM_Init(void);
extern void MET_BM_DeInit(void);
extern void MET_BM_SaveCfg(void);
extern void MET_BM_RestoreCfg(void);
extern void MET_BM_SetReadWriteType(const unsigned int ReadWriteType);
extern int MET_BM_SetMonitorCounter(const unsigned int counter_num,
				    const unsigned int master, const unsigned int trans_type);
extern int MET_BM_SetTtypeCounterRW(unsigned int bmrw0_val, unsigned int bmrw1_val);
extern int MET_BM_SetLatencyCounter(unsigned int enable);
#endif				/* !__MT_MET_EMI_BM_H__ */
