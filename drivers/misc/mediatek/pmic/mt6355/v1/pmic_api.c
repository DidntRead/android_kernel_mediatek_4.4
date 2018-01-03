/*
 * Copyright (C) 2016 MediaTek Inc.

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include <linux/kernel.h>
#include <linux/module.h>

#include <mach/upmu_sw.h>
#include <mach/upmu_hw.h>
#include <mt-plat/upmu_common.h>

unsigned int mt6355_upmu_get_hwcid(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_HWCID),
				  (&val),
				  (unsigned int)(PMIC_HWCID_MASK), (unsigned int)(PMIC_HWCID_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_swcid(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_SWCID),
				  (&val),
				  (unsigned int)(PMIC_SWCID_MASK), (unsigned int)(PMIC_SWCID_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_srclken_in0_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN0_EN_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN0_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_srclken_in0_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CON),
				  (&val),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN0_EN_MASK),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN0_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_srclken_in1_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN1_EN_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN1_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_srclken_in1_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CON),
				  (&val),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN1_EN_MASK),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN1_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_SEL_MASK),
				    (unsigned int)(PMIC_RG_OSC_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_srclken_in0_hw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN0_HW_MODE_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN0_HW_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_srclken_in1_hw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN1_HW_MODE_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN1_HW_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_osc_sel_hw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_SEL_HW_MODE_MASK),
				    (unsigned int)(PMIC_RG_OSC_SEL_HW_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_srclken_in_sync_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN_SYNC_EN_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN_SYNC_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_srclken_in_sync_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CON),
				  (&val),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN_SYNC_EN_MASK),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN_SYNC_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_en_auto_off(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_EN_AUTO_OFF_MASK),
				    (unsigned int)(PMIC_RG_OSC_EN_AUTO_OFF_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_osc_en_auto_off(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CON),
				  (&val),
				  (unsigned int)(PMIC_RG_OSC_EN_AUTO_OFF_MASK),
				  (unsigned int)(PMIC_RG_OSC_EN_AUTO_OFF_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_test_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TEST_OUT),
				  (&val),
				  (unsigned int)(PMIC_TEST_OUT_MASK),
				  (unsigned int)(PMIC_TEST_OUT_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_mon_flag_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TEST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_MON_FLAG_SEL_MASK),
				    (unsigned int)(PMIC_RG_MON_FLAG_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_mon_grp_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TEST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_MON_GRP_SEL_MASK),
				    (unsigned int)(PMIC_RG_MON_GRP_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_nandtree_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TEST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_NANDTREE_MODE_MASK),
				    (unsigned int)(PMIC_RG_NANDTREE_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_test_auxadc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TEST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_TEST_AUXADC_MASK),
				    (unsigned int)(PMIC_RG_TEST_AUXADC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_efuse_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TEST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_EFUSE_MODE_MASK),
				    (unsigned int)(PMIC_RG_EFUSE_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_test_strup(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TEST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_TEST_STRUP_MASK),
				    (unsigned int)(PMIC_RG_TEST_STRUP_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_testmode_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TESTMODE_SW),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TESTMODE_SW_MASK),
				    (unsigned int)(PMIC_TESTMODE_SW_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_va12_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VA12_PG_DEB_MASK),
				  (unsigned int)(PMIC_VA12_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_va10_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VA10_PG_DEB_MASK),
				  (unsigned int)(PMIC_VA10_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vsram_gpu_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VSRAM_GPU_PG_DEB_MASK),
				  (unsigned int)(PMIC_VSRAM_GPU_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vsram_md_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VSRAM_MD_PG_DEB_MASK),
				  (unsigned int)(PMIC_VSRAM_MD_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vsram_core_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VSRAM_CORE_PG_DEB_MASK),
				  (unsigned int)(PMIC_VSRAM_CORE_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_va18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VA18_PG_DEB_MASK),
				  (unsigned int)(PMIC_VA18_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_buck_rsv_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_BUCK_RSV_PG_DEB_MASK),
				  (unsigned int)(PMIC_BUCK_RSV_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vdram2_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VDRAM2_PG_DEB_MASK),
				  (unsigned int)(PMIC_VDRAM2_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vdram1_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VDRAM1_PG_DEB_MASK),
				  (unsigned int)(PMIC_VDRAM1_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vproc12_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VPROC12_PG_DEB_MASK),
				  (unsigned int)(PMIC_VPROC12_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vproc11_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VPROC11_PG_DEB_MASK),
				  (unsigned int)(PMIC_VPROC11_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vs1_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VS1_PG_DEB_MASK),
				  (unsigned int)(PMIC_VS1_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vmodem_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VMODEM_PG_DEB_MASK),
				  (unsigned int)(PMIC_VMODEM_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vgpu_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VGPU_PG_DEB_MASK),
				  (unsigned int)(PMIC_VGPU_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vcore_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VCORE_PG_DEB_MASK),
				  (unsigned int)(PMIC_VCORE_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vs2_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_VS2_PG_DEB_MASK),
				  (unsigned int)(PMIC_VS2_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_ext_pmic_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_EXT_PMIC_PG_DEB_MASK),
				  (unsigned int)(PMIC_EXT_PMIC_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vxo18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_VXO18_PG_DEB_MASK),
				  (unsigned int)(PMIC_VXO18_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vxo22_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_VXO22_PG_DEB_MASK),
				  (unsigned int)(PMIC_VXO22_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vusb33_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_VUSB33_PG_DEB_MASK),
				  (unsigned int)(PMIC_VUSB33_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vsram_proc_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_VSRAM_PROC_PG_DEB_MASK),
				  (unsigned int)(PMIC_VSRAM_PROC_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vio28_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_VIO28_PG_DEB_MASK),
				  (unsigned int)(PMIC_VIO28_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vufs18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_VUFS18_PG_DEB_MASK),
				  (unsigned int)(PMIC_VUFS18_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vemc_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_VEMC_PG_DEB_MASK),
				  (unsigned int)(PMIC_VEMC_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vio18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGDEBSTATU1),
				  (&val),
				  (unsigned int)(PMIC_VIO18_PG_DEB_MASK),
				  (unsigned int)(PMIC_VIO18_PG_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_va12_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VA12_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VA12_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_va10_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VA10_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VA10_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vsram_gpu_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VSRAM_GPU_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VSRAM_GPU_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vsram_md_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VSRAM_MD_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VSRAM_MD_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vsram_core_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VSRAM_CORE_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VSRAM_CORE_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_va18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VA18_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VA18_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_buck_rsv_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_BUCK_RSV_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_BUCK_RSV_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vdram2_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VDRAM2_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VDRAM2_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vdram1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VDRAM1_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VDRAM1_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vproc12_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VPROC12_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VPROC12_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vproc11_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VPROC11_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VPROC11_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vs1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VS1_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VS1_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vmodem_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VMODEM_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VMODEM_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vgpu_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VGPU_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VGPU_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vcore_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VCORE_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VCORE_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vs2_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS0),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VS2_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VS2_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_ext_pmic_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_EXT_PMIC_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_EXT_PMIC_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vxo18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VXO18_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VXO18_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vxo22_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VXO22_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VXO22_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vusb33_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VUSB33_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VUSB33_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vsram_proc_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VSRAM_PROC_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VSRAM_PROC_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vio28_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VIO28_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VIO28_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vufs18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VUFS18_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VUFS18_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vemc_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VEMC_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VEMC_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vio18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PGSTATUS1),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VIO18_PG_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VIO18_PG_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_buck_rsv_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_BUCK_RSV_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_BUCK_RSV_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vdram2_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VDRAM2_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VDRAM2_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vdram1_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VDRAM1_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VDRAM1_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vproc12_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VPROC12_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VPROC12_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vproc11_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VPROC11_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VPROC11_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vs1_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VS1_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VS1_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vmodem_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VMODEM_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VMODEM_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vgpu_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VGPU_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VGPU_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vcore_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VCORE_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VCORE_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_vs2_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_PSOCSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_VS2_OC_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_VS2_OC_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_pmu_thermal_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_THERMALSTATUS),
				  (&val),
				  (unsigned int)(PMIC_PMU_THERMAL_DEB_MASK),
				  (unsigned int)(PMIC_PMU_THERMAL_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_strup_thermal_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_THERMALSTATUS),
				  (&val),
				  (unsigned int)(PMIC_STRUP_THERMAL_STATUS_MASK),
				  (unsigned int)(PMIC_STRUP_THERMAL_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_pmu_test_mode_scan(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOPSTATUS),
				  (&val),
				  (unsigned int)(PMIC_PMU_TEST_MODE_SCAN_MASK),
				  (unsigned int)(PMIC_PMU_TEST_MODE_SCAN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_pwrkey_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOPSTATUS),
				  (&val),
				  (unsigned int)(PMIC_PWRKEY_DEB_MASK),
				  (unsigned int)(PMIC_PWRKEY_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_homekey_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOPSTATUS),
				  (&val),
				  (unsigned int)(PMIC_HOMEKEY_DEB_MASK),
				  (unsigned int)(PMIC_HOMEKEY_DEB_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_rtc_xtal_det_done(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOPSTATUS),
				  (&val),
				  (unsigned int)(PMIC_RTC_XTAL_DET_DONE_MASK),
				  (unsigned int)(PMIC_RTC_XTAL_DET_DONE_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_xosc32_enb_det(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOPSTATUS),
				  (&val),
				  (unsigned int)(PMIC_XOSC32_ENB_DET_MASK),
				  (unsigned int)(PMIC_XOSC32_ENB_DET_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rtc_xtal_det_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOPSTATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RTC_XTAL_DET_RSV_MASK),
				    (unsigned int)(PMIC_RTC_XTAL_DET_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_pmu_tdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TDSEL_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_PMU_TDSEL_MASK),
				    (unsigned int)(PMIC_RG_PMU_TDSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_spi_tdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TDSEL_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_TDSEL_MASK),
				    (unsigned int)(PMIC_RG_SPI_TDSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud_tdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TDSEL_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_TDSEL_MASK),
				    (unsigned int)(PMIC_RG_AUD_TDSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_e32cal_tdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TDSEL_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_E32CAL_TDSEL_MASK),
				    (unsigned int)(PMIC_RG_E32CAL_TDSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_pmu_rdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_RDSEL_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_PMU_RDSEL_MASK),
				    (unsigned int)(PMIC_RG_PMU_RDSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_spi_rdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_RDSEL_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_RDSEL_MASK),
				    (unsigned int)(PMIC_RG_SPI_RDSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud_rdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_RDSEL_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_RDSEL_MASK),
				    (unsigned int)(PMIC_RG_AUD_RDSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_e32cal_rdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_RDSEL_CON),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_E32CAL_RDSEL_MASK),
				    (unsigned int)(PMIC_RG_E32CAL_RDSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_wdtrstb_in(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_WDTRSTB_IN_MASK),
				    (unsigned int)(PMIC_RG_SMT_WDTRSTB_IN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_homekey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_HOMEKEY_MASK),
				    (unsigned int)(PMIC_RG_SMT_HOMEKEY_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_srclken_in0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_SRCLKEN_IN0_MASK),
				    (unsigned int)(PMIC_RG_SMT_SRCLKEN_IN0_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_srclken_in1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_SRCLKEN_IN1_MASK),
				    (unsigned int)(PMIC_RG_SMT_SRCLKEN_IN1_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_rtc_32k1v8_0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_RTC_32K1V8_0_MASK),
				    (unsigned int)(PMIC_RG_SMT_RTC_32K1V8_0_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_rtc_32k1v8_1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_RTC_32K1V8_1_MASK),
				    (unsigned int)(PMIC_RG_SMT_RTC_32K1V8_1_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_scp_vreq_vao(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_SCP_VREQ_VAO_MASK),
				    (unsigned int)(PMIC_RG_SMT_SCP_VREQ_VAO_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_spi_clk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_SPI_CLK_MASK),
				    (unsigned int)(PMIC_RG_SMT_SPI_CLK_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_spi_csn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_SPI_CSN_MASK),
				    (unsigned int)(PMIC_RG_SMT_SPI_CSN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_spi_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_SPI_MOSI_MASK),
				    (unsigned int)(PMIC_RG_SMT_SPI_MOSI_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_spi_miso(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_SPI_MISO_MASK),
				    (unsigned int)(PMIC_RG_SMT_SPI_MISO_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_aud_clk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_AUD_CLK_MASK),
				    (unsigned int)(PMIC_RG_SMT_AUD_CLK_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_aud_dat_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_AUD_DAT_MOSI_MASK),
				    (unsigned int)(PMIC_RG_SMT_AUD_DAT_MOSI_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_aud_dat_miso(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_AUD_DAT_MISO_MASK),
				    (unsigned int)(PMIC_RG_SMT_AUD_DAT_MISO_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smt_vow_clk_miso(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_SMT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMT_VOW_CLK_MISO_MASK),
				    (unsigned int)(PMIC_RG_SMT_VOW_CLK_MISO_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_srclken_in0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_SRCLKEN_IN0_MASK),
				    (unsigned int)(PMIC_RG_OCTL_SRCLKEN_IN0_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_srclken_in1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_SRCLKEN_IN1_MASK),
				    (unsigned int)(PMIC_RG_OCTL_SRCLKEN_IN1_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_rtc_32k1v8_0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_RTC_32K1V8_0_MASK),
				    (unsigned int)(PMIC_RG_OCTL_RTC_32K1V8_0_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_rtc_32k1v8_1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_RTC_32K1V8_1_MASK),
				    (unsigned int)(PMIC_RG_OCTL_RTC_32K1V8_1_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_spi_clk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_SPI_CLK_MASK),
				    (unsigned int)(PMIC_RG_OCTL_SPI_CLK_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_spi_csn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_SPI_CSN_MASK),
				    (unsigned int)(PMIC_RG_OCTL_SPI_CSN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_spi_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_SPI_MOSI_MASK),
				    (unsigned int)(PMIC_RG_OCTL_SPI_MOSI_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_spi_miso(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_SPI_MISO_MASK),
				    (unsigned int)(PMIC_RG_OCTL_SPI_MISO_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_aud_clk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_AUD_CLK_MASK),
				    (unsigned int)(PMIC_RG_OCTL_AUD_CLK_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_aud_dat_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_AUD_DAT_MOSI_MASK),
				    (unsigned int)(PMIC_RG_OCTL_AUD_DAT_MOSI_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_aud_dat_miso(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_AUD_DAT_MISO_MASK),
				    (unsigned int)(PMIC_RG_OCTL_AUD_DAT_MISO_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_vow_clk_miso(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_VOW_CLK_MISO_MASK),
				    (unsigned int)(PMIC_RG_OCTL_VOW_CLK_MISO_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_homekey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_HOMEKEY_MASK),
				    (unsigned int)(PMIC_RG_OCTL_HOMEKEY_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_octl_scp_vreq_vao(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_DRV_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OCTL_SCP_VREQ_VAO_MASK),
				    (unsigned int)(PMIC_RG_OCTL_SCP_VREQ_VAO_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_spi_clk_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_CLK_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_SPI_CLK_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_spi_clk_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_SPI_CLK_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_SPI_CLK_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_spi_csn_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_CSN_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_SPI_CSN_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_spi_csn_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_SPI_CSN_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_SPI_CSN_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_spi_mosi_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_MOSI_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_SPI_MOSI_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_spi_mosi_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_SPI_MOSI_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_SPI_MOSI_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_spi_miso_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_MISO_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_SPI_MISO_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_spi_miso_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_SPI_MISO_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_SPI_MISO_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_aud_clk_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_CLK_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_AUD_CLK_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_aud_clk_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_AUD_CLK_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_AUD_CLK_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_aud_dat_mosi_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_DAT_MOSI_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_AUD_DAT_MOSI_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_aud_dat_mosi_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_AUD_DAT_MOSI_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_AUD_DAT_MOSI_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_aud_dat_miso_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_DAT_MISO_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_AUD_DAT_MISO_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_aud_dat_miso_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_AUD_DAT_MISO_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_AUD_DAT_MISO_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_vow_clk_miso_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VOW_CLK_MISO_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_VOW_CLK_MISO_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_vow_clk_miso_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_VOW_CLK_MISO_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_VOW_CLK_MISO_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_wdtrstb_in_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_WDTRSTB_IN_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_WDTRSTB_IN_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_wdtrstb_in_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_WDTRSTB_IN_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_WDTRSTB_IN_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_homekey_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_HOMEKEY_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_HOMEKEY_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_homekey_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_HOMEKEY_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_HOMEKEY_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_srclken_in0_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN0_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN0_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_srclken_in0_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN0_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN0_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_srclken_in1_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN1_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN1_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_srclken_in1_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN1_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN1_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_rtc32k_1v8_0_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_0_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_0_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_rtc32k_1v8_0_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_RTC32K_1V8_0_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_RTC32K_1V8_0_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_rtc32k_1v8_1_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_1_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_1_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_rtc32k_1v8_1_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_RTC32K_1V8_1_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_RTC32K_1V8_1_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_scp_vreq_vao_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SCP_VREQ_VAO_FILTER_EN_MASK),
				    (unsigned int)(PMIC_RG_SCP_VREQ_VAO_FILTER_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_scp_vreq_vao_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_FILTER_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_SCP_VREQ_VAO_FILTER_EN_MASK),
				  (unsigned int)(PMIC_RG_SCP_VREQ_VAO_FILTER_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_spi_clk_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_CLK_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_SPI_CLK_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_spi_csn_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_CSN_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_SPI_CSN_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_spi_mosi_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_MOSI_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_SPI_MOSI_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_spi_miso_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_MISO_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_SPI_MISO_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud_clk_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_CLK_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_AUD_CLK_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud_dat_mosi_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_DAT_MOSI_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_AUD_DAT_MOSI_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud_dat_miso_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_DAT_MISO_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_AUD_DAT_MISO_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vow_clk_miso_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VOW_CLK_MISO_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_VOW_CLK_MISO_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_wdtrstb_in_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_WDTRSTB_IN_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_WDTRSTB_IN_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_homekey_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_HOMEKEY_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_HOMEKEY_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_srclken_in0_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN0_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN0_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_srclken_in1_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN1_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN1_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc32k_1v8_0_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_0_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_0_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc32k_1v8_1_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_1_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_1_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_scp_vreq_vao_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_FILTER_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SCP_VREQ_VAO_RCSEL_MASK),
				    (unsigned int)(PMIC_RG_SCP_VREQ_VAO_RCSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_STATUS_MASK),
				    (unsigned int)(PMIC_TOP_STATUS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_srclken_in2_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_SPI_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN2_EN_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN2_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_srclken_in2_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_SPI_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN2_EN_MASK),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN2_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_srclken_in3_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_SPI_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN3_EN_MASK),
				    (unsigned int)(PMIC_RG_SRCLKEN_IN3_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_srclken_in3_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_SPI_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN3_EN_MASK),
				  (unsigned int)(PMIC_RG_SRCLKEN_IN3_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_get_vm_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_TRAP),
				  (&val),
				  (unsigned int)(PMIC_VM_MODE_MASK),
				  (unsigned int)(PMIC_VM_MODE_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_g_smps_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_g_smps_test_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_SMPS_TEST_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_G_SMPS_TEST_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_intrp_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INTRP_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_INTRP_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_intrp_pre_oc_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INTRP_PRE_OC_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_INTRP_PRE_OC_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_g_bif_1m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_BIF_1M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_G_BIF_1M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bif_x1_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BIF_X1_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BIF_X1_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bif_x4_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BIF_X4_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BIF_X4_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bif_x72_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BIF_X72_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BIF_X72_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_ao_1m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_AO_1M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_AO_1M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_rng_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_RNG_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_RNG_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_1m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_1M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_1M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_drv_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_DRV_32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_DRV_32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_top_ckpdn_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_TOP_CKPDN_CON0_RSV_MASK),
				    (unsigned int)(PMIC_RG_TOP_CKPDN_CON0_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_9m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_9M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_9M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_1m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_1M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_1M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_18m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_18M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_18M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_ldo_9m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_LDO_9M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_LDO_9M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_ldo_1m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_LDO_1M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_LDO_1M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rsv0_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RSV0_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RSV0_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_ana_clk_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_ANA_CLK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_ANA_CLK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_trim_75k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_TRIM_75K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_TRIM_75K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_chdet_75k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CHDET_75K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_CHDET_75K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_spi_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPI_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_SPI_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_reg_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_REG_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_REG_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bgr_test_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BGR_TEST_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BGR_TEST_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fqmtr_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FQMTR_32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_FQMTR_32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fqmtr_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FQMTR_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_FQMTR_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_ana_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_ANA_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_ANA_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_eosc_cali_test_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_EOSC_CALI_TEST_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_EOSC_CALI_TEST_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_eosc32_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_EOSC32_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC_EOSC32_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_sec_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_SEC_32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC_SEC_32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_mclk_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_MCLK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC_MCLK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC_32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_26m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_26M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC_26M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fgadc_ft_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FGADC_FT_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_FGADC_FT_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fgadc_dig_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FGADC_DIG_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_FGADC_DIG_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fgadc_ana_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FGADC_ANA_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_FGADC_ANA_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_strup_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_STRUP_32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_STRUP_32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_strup_75k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_STRUP_75K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_STRUP_75K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc32k_1v8_0_o_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_0_O_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_0_O_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc32k_1v8_1_o_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_1_O_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC32K_1V8_1_O_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_2sec_off_det_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_2SEC_OFF_DET_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC_2SEC_OFF_DET_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smps_ck_div_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMPS_CK_DIV_PDN_MASK),
				    (unsigned int)(PMIC_RG_SMPS_CK_DIV_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_baton_75k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BATON_75K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_BATON_75K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_efuse_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_EFUSE_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_EFUSE_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_accdet_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_ACCDET_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_ACCDET_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_AUD_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_audif_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUDIF_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_AUDIF_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vow32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VOW32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_VOW32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vow12m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VOW12M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_VOW12M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_zcd13m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_ZCD13M_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_ZCD13M_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_sec_mclk_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_SEC_MCLK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC_SEC_MCLK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_eint_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_EINT_32K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_EINT_32K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_top_ckpdn_con3_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_TOP_CKPDN_CON3_RSV_MASK),
				    (unsigned int)(PMIC_RG_TOP_CKPDN_CON3_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtcdet_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON4),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTCDET_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTCDET_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_75k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKPDN_CON4),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_75K_CK_PDN_MASK),
				    (unsigned int)(PMIC_RG_RTC_75K_CK_PDN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fqmtr_ck_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FQMTR_CK_CKSEL_MASK),
				    (unsigned int)(PMIC_RG_FQMTR_CK_CKSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_75k_32k_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_75K_32K_SEL_MASK),
				    (unsigned int)(PMIC_RG_75K_32K_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fgadc_ana_ck_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FGADC_ANA_CK_CKSEL_MASK),
				    (unsigned int)(PMIC_RG_FGADC_ANA_CK_CKSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bgr_test_ck_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BGR_TEST_CK_CKSEL_MASK),
				    (unsigned int)(PMIC_RG_BGR_TEST_CK_CKSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud_ck_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_CK_CKSEL_MASK),
				    (unsigned int)(PMIC_RG_AUD_CK_CKSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_audif_ck_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUDIF_CK_CKSEL_MASK),
				    (unsigned int)(PMIC_RG_AUDIF_CK_CKSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_top_cksel_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_TOP_CKSEL_CON0_RSV_MASK),
				    (unsigned int)(PMIC_RG_TOP_CKSEL_CON0_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_srcvolten_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCVOLTEN_SW_MASK),
				    (unsigned int)(PMIC_RG_SRCVOLTEN_SW_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_osc_sel_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_OSC_SEL_SW_MASK),
				    (unsigned int)(PMIC_RG_BUCK_OSC_SEL_SW_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vowen_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VOWEN_SW_MASK),
				    (unsigned int)(PMIC_RG_VOWEN_SW_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_srcvolten_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SRCVOLTEN_MODE_MASK),
				    (unsigned int)(PMIC_RG_SRCVOLTEN_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_osc_sel_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_OSC_SEL_MODE_MASK),
				    (unsigned int)(PMIC_RG_BUCK_OSC_SEL_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vowen_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VOWEN_MODE_MASK),
				    (unsigned int)(PMIC_RG_VOWEN_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_top_cksel_con2_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKSEL_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_TOP_CKSEL_CON2_RSV_MASK),
				    (unsigned int)(PMIC_RG_TOP_CKSEL_CON2_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_ck_divsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKDIVSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_CK_DIVSEL_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_CK_DIVSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_ldo_9m_ck_divsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKDIVSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_LDO_9M_CK_DIVSEL_MASK),
				    (unsigned int)(PMIC_RG_LDO_9M_CK_DIVSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_9m_ck_divsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKDIVSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_9M_CK_DIVSEL_MASK),
				    (unsigned int)(PMIC_RG_BUCK_9M_CK_DIVSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bif_x4_ck_divsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKDIVSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BIF_X4_CK_DIVSEL_MASK),
				    (unsigned int)(PMIC_RG_BIF_X4_CK_DIVSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_reg_ck_divsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKDIVSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_REG_CK_DIVSEL_MASK),
				    (unsigned int)(PMIC_RG_REG_CK_DIVSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_ckdivsel_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKDIVSEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_CKDIVSEL_CON0_RSV_MASK),
				    (unsigned int)(PMIC_TOP_CKDIVSEL_CON0_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_g_smps_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smps_pd_1m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMPS_PD_1M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_SMPS_PD_1M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_rng_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_RNG_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_RNG_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bif_x4_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BIF_X4_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_BIF_X4_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bif_x72_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BIF_X72_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_BIF_X72_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_26m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_26M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_RTC_26M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_reg_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_REG_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_REG_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_mclk_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_MCLK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_RTC_MCLK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_sec_32k_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_SEC_32K_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_RTC_SEC_32K_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_efuse_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_EFUSE_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_EFUSE_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_sec_mclk_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_SEC_MCLK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_RTC_SEC_MCLK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_32k_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_32K_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_32K_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_eint_32k_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_EINT_32K_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_EINT_32K_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_ckhwen_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_CKHWEN_CON0_RSV_MASK),
				    (unsigned int)(PMIC_TOP_CKHWEN_CON0_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_9m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_9M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_9M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_1m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_1M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_1M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_18m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_18M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_18M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_ldo_1m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_LDO_1M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_LDO_1M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_ldo_9m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_LDO_9M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_LDO_9M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_vmodem_1m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_VMODEM_1M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_BUCK_VMODEM_1M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_1m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_1M_CK_PDN_HWEN_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_1M_CK_PDN_HWEN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_ckhwen_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKHWEN_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_CKHWEN_RSV_MASK),
				    (unsigned int)(PMIC_TOP_CKHWEN_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vproc11_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VPROC11_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VPROC11_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vproc12_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VPROC12_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VPROC12_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vcore_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VCORE_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VCORE_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vgpu_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VGPU_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VGPU_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vdram1_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VDRAM1_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VDRAM1_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vdram2_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VDRAM2_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VDRAM2_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vmodem_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VMODEM_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VMODEM_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_buck_anack_freq_sel_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_BUCK_ANACK_FREQ_SEL_CON0_RSV_MASK),
				    (unsigned int)(PMIC_TOP_BUCK_ANACK_FREQ_SEL_CON0_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vs1_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VS1_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VS1_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vs2_freq_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VS2_FREQ_SEL_MASK),
				    (unsigned int)(PMIC_RG_VS2_FREQ_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vpa_phs_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VPA_PHS_SEL_MASK),
				    (unsigned int)(PMIC_RG_VPA_PHS_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_buck_anack_freq_sel_con1_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_BUCK_ANACK_FREQ_SEL_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_BUCK_ANACK_FREQ_SEL_CON1_RSV_MASK),
				    (unsigned int)(PMIC_TOP_BUCK_ANACK_FREQ_SEL_CON1_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_pmu75k_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_PMU75K_CK_TST_DIS_MASK),
				    (unsigned int)(PMIC_RG_PMU75K_CK_TST_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smps_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMPS_CK_TST_DIS_MASK),
				    (unsigned int)(PMIC_RG_SMPS_CK_TST_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc32k_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC32K_CK_TST_DIS_MASK),
				    (unsigned int)(PMIC_RG_RTC32K_CK_TST_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fg_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FG_CK_TST_DIS_MASK),
				    (unsigned int)(PMIC_RG_FG_CK_TST_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc26m_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC26M_CK_TST_DIS_MASK),
				    (unsigned int)(PMIC_RG_RTC26M_CK_TST_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud26m_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD26M_CK_TST_DIS_MASK),
				    (unsigned int)(PMIC_RG_AUD26M_CK_TST_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vow12m_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VOW12M_CK_TST_DIS_MASK),
				    (unsigned int)(PMIC_RG_VOW12M_CK_TST_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_cktst_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_CKTST_CON0_RSV_MASK),
				    (unsigned int)(PMIC_TOP_CKTST_CON0_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_ana_auto_off_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_ANA_AUTO_OFF_DIS_MASK),
				    (unsigned int)(PMIC_RG_BUCK_ANA_AUTO_OFF_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fqmtr_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FQMTR_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_FQMTR_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtcdet_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTCDET_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_RTCDET_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_eosc32_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_EOSC32_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_RTC_EOSC32_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_eosc_cali_test_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc26m_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC26M_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_RTC26M_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc32k_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC32K_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_RTC32K_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fg_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FG_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_FG_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fgadc_ana_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FGADC_ANA_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_FGADC_ANA_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bgr_test_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BGR_TEST_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_BGR_TEST_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_pmu75k_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_PMU75K_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_PMU75K_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_smps_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SMPS_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_SMPS_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_AUD_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_audif_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUDIF_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_AUDIF_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_aud26m_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUD26M_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_AUD26M_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vow12m_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CKTST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VOW12M_CK_TSTSEL_MASK),
				    (unsigned int)(PMIC_RG_VOW12M_CK_TSTSEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_clksq_en_aud(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUD_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUD_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_en_aud(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUD_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUD_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_en_fqr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_FQR_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_FQR_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_en_fqr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_FQR_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_FQR_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_en_aux_ap(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_AP_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_AP_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_en_aux_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_AP_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_AP_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_en_aux_md(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_MD_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_MD_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_en_aux_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_MD_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_MD_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_en_aux_gps(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_GPS_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_GPS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_en_aux_gps(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_GPS_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_GPS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_en_aux_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_RSV_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_en_aux_rsv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_RSV_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_RSV_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_en_aux_ap_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_AP_MODE_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_AP_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_en_aux_ap_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_AP_MODE_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_AP_MODE_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_en_aux_md_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_MD_MODE_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_MD_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_en_aux_md_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_MD_MODE_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_EN_AUX_MD_MODE_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_in_sel_va18(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_IN_SEL_VA18_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_IN_SEL_VA18_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_clksq_in_sel_va18_swctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_IN_SEL_VA18_SWCTRL_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_IN_SEL_VA18_SWCTRL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_clksq_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_CLKSQ_RSV_MASK),
				    (unsigned int)(PMIC_TOP_CLKSQ_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_da_clksq_en_va18(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ),
				  (&val),
				  (unsigned int)(PMIC_DA_CLKSQ_EN_VA18_MASK),
				  (unsigned int)(PMIC_DA_CLKSQ_EN_VA18_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_rtc_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_RTC_EN_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_RTC_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_rtc_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_RTC_EN_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_RTC_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clksq_rtc_en_hw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKSQ_RTC_EN_HW_MODE_MASK),
				    (unsigned int)(PMIC_RG_CLKSQ_RTC_EN_HW_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_clksq_rtc_en_hw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				  (&val),
				  (unsigned int)(PMIC_RG_CLKSQ_RTC_EN_HW_MODE_MASK),
				  (unsigned int)(PMIC_RG_CLKSQ_RTC_EN_HW_MODE_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_top_clksq_rtc_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_CLKSQ_RTC_RSV0_MASK),
				    (unsigned int)(PMIC_TOP_CLKSQ_RTC_RSV0_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_enbb_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_ENBB_SEL_MASK),
				    (unsigned int)(PMIC_RG_ENBB_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_xosc_en_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_XOSC_EN_SEL_MASK),
				    (unsigned int)(PMIC_RG_XOSC_EN_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_xosc_en_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				  (&val),
				  (unsigned int)(PMIC_RG_XOSC_EN_SEL_MASK),
				  (unsigned int)(PMIC_RG_XOSC_EN_SEL_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_top_clksq_rtc_rsv1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_CLKSQ_RTC_RSV1_MASK),
				    (unsigned int)(PMIC_TOP_CLKSQ_RTC_RSV1_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_da_clksq_en_vdig18(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLKSQ_RTC),
				  (&val),
				  (unsigned int)(PMIC_DA_CLKSQ_EN_VDIG18_MASK),
				  (unsigned int)(PMIC_DA_CLKSQ_EN_VDIG18_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_75k_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_TRIM),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_75K_TRIM_MASK),
				    (unsigned int)(PMIC_RG_OSC_75K_TRIM_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_osc_75k_trim_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_TRIM),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_75K_TRIM_EN_MASK),
				    (unsigned int)(PMIC_RG_OSC_75K_TRIM_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_osc_75k_trim_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_TRIM),
				  (&val),
				  (unsigned int)(PMIC_RG_OSC_75K_TRIM_EN_MASK),
				  (unsigned int)(PMIC_RG_OSC_75K_TRIM_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_75k_trim_rate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_TRIM),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_75K_TRIM_RATE_MASK),
				    (unsigned int)(PMIC_RG_OSC_75K_TRIM_RATE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_da_osc_75k_trim(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_TRIM),
				  (&val),
				  (unsigned int)(PMIC_DA_OSC_75K_TRIM_MASK),
				  (unsigned int)(PMIC_DA_OSC_75K_TRIM_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_g_smps_ck_pdn_srclken0_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN0_EN_MASK),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN0_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_g_smps_ck_pdn_srclken0_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN0_EN_MASK),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN0_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_g_smps_ck_pdn_srclken1_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN1_EN_MASK),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN1_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_g_smps_ck_pdn_srclken1_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN1_EN_MASK),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN1_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_g_smps_ck_pdn_srclken2_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN2_EN_MASK),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN2_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_g_smps_ck_pdn_srclken2_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN2_EN_MASK),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_SRCLKEN2_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_g_smps_ck_pdn_buck_osc_sel_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_BUCK_OSC_SEL_EN_MASK),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_BUCK_OSC_SEL_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_g_smps_ck_pdn_buck_osc_sel_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_BUCK_OSC_SEL_EN_MASK),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_BUCK_OSC_SEL_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_g_smps_ck_pdn_vowen_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_VOWEN_EN_MASK),
				    (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_VOWEN_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_g_smps_ck_pdn_vowen_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_VOWEN_EN_MASK),
				  (unsigned int)(PMIC_RG_G_SMPS_CK_PDN_VOWEN_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_sel_srclken0_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN0_EN_MASK),
				    (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN0_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_osc_sel_srclken0_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN0_EN_MASK),
				  (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN0_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_sel_srclken1_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN1_EN_MASK),
				    (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN1_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_osc_sel_srclken1_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN1_EN_MASK),
				  (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN1_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_sel_srclken2_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN2_EN_MASK),
				    (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN2_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_osc_sel_srclken2_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN2_EN_MASK),
				  (unsigned int)(PMIC_RG_OSC_SEL_SRCLKEN2_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_sel_buck_ldo_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_SEL_BUCK_LDO_EN_MASK),
				    (unsigned int)(PMIC_RG_OSC_SEL_BUCK_LDO_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_osc_sel_buck_ldo_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_OSC_SEL_BUCK_LDO_EN_MASK),
				  (unsigned int)(PMIC_RG_OSC_SEL_BUCK_LDO_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_osc_sel_vowen_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_OSC_SEL_VOWEN_EN_MASK),
				    (unsigned int)(PMIC_RG_OSC_SEL_VOWEN_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_osc_sel_vowen_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_OSC_SEL_VOWEN_EN_MASK),
				  (unsigned int)(PMIC_RG_OSC_SEL_VOWEN_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_clk_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLK_RSV_MASK),
				    (unsigned int)(PMIC_RG_CLK_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_vproc2_ckmux_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VPROC2_CKMUX_EN_MASK),
				    (unsigned int)(PMIC_RG_VPROC2_CKMUX_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_vproc2_ckmux_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_VPROC2_CKMUX_EN_MASK),
				  (unsigned int)(PMIC_RG_VPROC2_CKMUX_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_vpa_sw_pdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_VPA_SW_PDN_EN_MASK),
				    (unsigned int)(PMIC_RG_VPA_SW_PDN_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_vpa_sw_pdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_CLK_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_VPA_SW_PDN_EN_MASK),
				  (unsigned int)(PMIC_RG_VPA_SW_PDN_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_ldo_1m_pdn_w_osc_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_LDO_1M_PDN_W_OSC_SEL_MASK),
				    (unsigned int)(PMIC_RG_LDO_1M_PDN_W_OSC_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_1m_pdn_w_osc_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_1M_PDN_W_OSC_SEL_MASK),
				    (unsigned int)(PMIC_RG_BUCK_1M_PDN_W_OSC_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_clkctl_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLKCTL_RSV0_MASK),
				    (unsigned int)(PMIC_RG_CLKCTL_RSV0_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_dcxo_pwrkey_rstb_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_CLK_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_DCXO_PWRKEY_RSTB_SEL_MASK),
				    (unsigned int)(PMIC_RG_DCXO_PWRKEY_RSTB_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_efuse_man_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_EFUSE_MAN_RST_MASK),
				    (unsigned int)(PMIC_RG_EFUSE_MAN_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_RST_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_auxadc_reg_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUXADC_REG_RST_MASK),
				    (unsigned int)(PMIC_RG_AUXADC_REG_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_audio_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUDIO_RST_MASK),
				    (unsigned int)(PMIC_RG_AUDIO_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_accdet_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_ACCDET_RST_MASK),
				    (unsigned int)(PMIC_RG_ACCDET_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_bif_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BIF_RST_MASK),
				    (unsigned int)(PMIC_RG_BIF_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_driver_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_DRIVER_RST_MASK),
				    (unsigned int)(PMIC_RG_DRIVER_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fgadc_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FGADC_RST_MASK),
				    (unsigned int)(PMIC_RG_FGADC_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fqmtr_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FQMTR_RST_MASK),
				    (unsigned int)(PMIC_RG_FQMTR_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_rtc_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_RTC_RST_MASK),
				    (unsigned int)(PMIC_RG_RTC_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_type_c_cc_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_TYPE_C_CC_RST_MASK),
				    (unsigned int)(PMIC_RG_TYPE_C_CC_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_chrwdt_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CHRWDT_RST_MASK),
				    (unsigned int)(PMIC_RG_CHRWDT_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_zcd_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_ZCD_RST_MASK),
				    (unsigned int)(PMIC_RG_ZCD_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_audncp_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_AUDNCP_RST_MASK),
				    (unsigned int)(PMIC_RG_AUDNCP_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_clk_trim_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CLK_TRIM_RST_MASK),
				    (unsigned int)(PMIC_RG_CLK_TRIM_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_srclken_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_SRCLKEN_RST_MASK),
				    (unsigned int)(PMIC_RG_BUCK_SRCLKEN_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_strup_long_press_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_STRUP_LONG_PRESS_RST_MASK),
				    (unsigned int)(PMIC_RG_STRUP_LONG_PRESS_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_prot_pmpp_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_PROT_PMPP_RST_MASK),
				    (unsigned int)(PMIC_RG_BUCK_PROT_PMPP_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_spk_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_SPK_RST_MASK),
				    (unsigned int)(PMIC_RG_SPK_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_chrdet_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CHRDET_RST_MASK),
				    (unsigned int)(PMIC_RG_CHRDET_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_buck_ldo_ft_testmode_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BUCK_LDO_FT_TESTMODE_RST_MASK),
				    (unsigned int)(PMIC_RG_BUCK_LDO_FT_TESTMODE_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_baton_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_BATON_RST_MASK),
				    (unsigned int)(PMIC_RG_BATON_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_fgadc_rst_src_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_FGADC_RST_SRC_SEL_MASK),
				    (unsigned int)(PMIC_RG_FGADC_RST_SRC_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_ldo_cali_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_LDO_CALI_RST_MASK),
				    (unsigned int)(PMIC_RG_LDO_CALI_RST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_pseq_pwrmsk_rst_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_PSEQ_PWRMSK_RST_SEL_MASK),
				    (unsigned int)(PMIC_RG_PSEQ_PWRMSK_RST_SEL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_rst_con1_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_RST_CON1_RSV_MASK),
				    (unsigned int)(PMIC_TOP_RST_CON1_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_chr_ldo_det_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CHR_LDO_DET_MODE_MASK),
				    (unsigned int)(PMIC_RG_CHR_LDO_DET_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_chr_ldo_det_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CHR_LDO_DET_SW_MASK),
				    (unsigned int)(PMIC_RG_CHR_LDO_DET_SW_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_chrwdt_flag_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CHRWDT_FLAG_MODE_MASK),
				    (unsigned int)(PMIC_RG_CHRWDT_FLAG_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_chrwdt_flag_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_CHRWDT_FLAG_SW_MASK),
				    (unsigned int)(PMIC_RG_CHRWDT_FLAG_SW_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_rst_con2_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_RST_CON2_RSV_MASK),
				    (unsigned int)(PMIC_TOP_RST_CON2_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_wdtrstb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_WDTRSTB_EN_MASK),
				    (unsigned int)(PMIC_RG_WDTRSTB_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_wdtrstb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_RST_MISC),
				  (&val),
				  (unsigned int)(PMIC_RG_WDTRSTB_EN_MASK),
				  (unsigned int)(PMIC_RG_WDTRSTB_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_wdtrstb_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_WDTRSTB_MODE_MASK),
				    (unsigned int)(PMIC_RG_WDTRSTB_MODE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_wdtrstb_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_RST_MISC),
				  (&val),
				  (unsigned int)(PMIC_WDTRSTB_STATUS_MASK),
				  (unsigned int)(PMIC_WDTRSTB_STATUS_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_wdtrstb_status_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_WDTRSTB_STATUS_CLR_MASK),
				    (unsigned int)(PMIC_WDTRSTB_STATUS_CLR_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_wdtrstb_fb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_WDTRSTB_FB_EN_MASK),
				    (unsigned int)(PMIC_RG_WDTRSTB_FB_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_wdtrstb_fb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_RST_MISC),
				  (&val),
				  (unsigned int)(PMIC_RG_WDTRSTB_FB_EN_MASK),
				  (unsigned int)(PMIC_RG_WDTRSTB_FB_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_wdtrstb_deb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_WDTRSTB_DEB_MASK),
				    (unsigned int)(PMIC_RG_WDTRSTB_DEB_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_homekey_rst_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_HOMEKEY_RST_EN_MASK),
				    (unsigned int)(PMIC_RG_HOMEKEY_RST_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_homekey_rst_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_RST_MISC),
				  (&val),
				  (unsigned int)(PMIC_RG_HOMEKEY_RST_EN_MASK),
				  (unsigned int)(PMIC_RG_HOMEKEY_RST_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_pwrkey_rst_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_PWRKEY_RST_EN_MASK),
				    (unsigned int)(PMIC_RG_PWRKEY_RST_EN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_pwrkey_rst_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_TOP_RST_MISC),
				  (&val),
				  (unsigned int)(PMIC_RG_PWRKEY_RST_EN_MASK),
				  (unsigned int)(PMIC_RG_PWRKEY_RST_EN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_pwrrst_tmr_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_PWRRST_TMR_DIS_MASK),
				    (unsigned int)(PMIC_RG_PWRRST_TMR_DIS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_pwrkey_rst_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_PWRKEY_RST_TD_MASK),
				    (unsigned int)(PMIC_RG_PWRKEY_RST_TD_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_rst_misc_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_MISC),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_RST_MISC_RSV_MASK),
				    (unsigned int)(PMIC_TOP_RST_MISC_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_vpwrin_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_VPWRIN_RSTB_STATUS_MASK),
				    (unsigned int)(PMIC_VPWRIN_RSTB_STATUS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_ddlo_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_DDLO_RSTB_STATUS_MASK),
				    (unsigned int)(PMIC_DDLO_RSTB_STATUS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_uvlo_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_UVLO_RSTB_STATUS_MASK),
				    (unsigned int)(PMIC_UVLO_RSTB_STATUS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rtc_ddlo_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RTC_DDLO_RSTB_STATUS_MASK),
				    (unsigned int)(PMIC_RTC_DDLO_RSTB_STATUS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_chrwdt_reg_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_CHRWDT_REG_RSTB_STATUS_MASK),
				    (unsigned int)(PMIC_CHRWDT_REG_RSTB_STATUS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_chrdet_reg_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_CHRDET_REG_RSTB_STATUS_MASK),
				    (unsigned int)(PMIC_CHRDET_REG_RSTB_STATUS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bwdt_ddlo_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BWDT_DDLO_RSTB_STATUS_MASK),
				    (unsigned int)(PMIC_BWDT_DDLO_RSTB_STATUS_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_rst_status_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_STATUS),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_RST_STATUS_RSV_MASK),
				    (unsigned int)(PMIC_TOP_RST_STATUS_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_rst_rsv_con0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_RSV_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_RST_RSV_CON0_MASK),
				    (unsigned int)(PMIC_TOP_RST_RSV_CON0_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_rst_rsv_con1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_RSV_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_RST_RSV_CON1_MASK),
				    (unsigned int)(PMIC_TOP_RST_RSV_CON1_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_fqmtr_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_FQMTR_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_FQMTR_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_spi_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_SPI_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_SPI_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_strup_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_STRUP_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_STRUP_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_buck_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_BUCK_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_BUCK_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_buck_ana_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_BUCK_ANA_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_BUCK_ANA_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_wdtdbg_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_WDTDBG_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_WDTDBG_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_ldo_0_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_LDO_0_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_LDO_0_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_ldo_1_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_LDO_1_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_LDO_1_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_ldo_ana_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_LDO_ANA_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_LDO_ANA_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_accdet_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_ACCDET_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_ACCDET_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_efuse_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_EFUSE_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_EFUSE_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_dcxo_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_DCXO_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_DCXO_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_pchr_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_PCHR_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_PCHR_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_gpio_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_GPIO_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_GPIO_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_eosc_cali_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_EOSC_CALI_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_EOSC_CALI_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_vrtc_pwm_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_VRTC_PWM_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_VRTC_PWM_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_rtc_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_RTC_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_RTC_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_rtc_sec_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_RTC_SEC_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_RTC_SEC_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_bif_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_BIF_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_BIF_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_fgadc_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_FGADC_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_FGADC_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_auxadc_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_AUXADC_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_AUXADC_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_driver_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_DRIVER_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_DRIVER_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_audio_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_AUDIO_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_AUDIO_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_bank_audzcd_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_BANK_AUDZCD_SWRST_MASK),
				    (unsigned int)(PMIC_BANK_AUDZCD_SWRST_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_top_rst_bank_con1_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_TOP_RST_BANK_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_TOP_RST_BANK_CON1_RSV_MASK),
				    (unsigned int)(PMIC_TOP_RST_BANK_CON1_RSV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_set_rg_int_en_pwrkey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_PWRKEY_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_PWRKEY_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_pwrkey(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_PWRKEY_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_PWRKEY_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_homekey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_HOMEKEY_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_HOMEKEY_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_homekey(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_HOMEKEY_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_HOMEKEY_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_pwrkey_r(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_PWRKEY_R_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_PWRKEY_R_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_pwrkey_r(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_PWRKEY_R_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_PWRKEY_R_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_homekey_r(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_HOMEKEY_R_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_HOMEKEY_R_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_homekey_r(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_HOMEKEY_R_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_HOMEKEY_R_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_ni_lbat_int(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_NI_LBAT_INT_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_NI_LBAT_INT_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_ni_lbat_int(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_NI_LBAT_INT_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_NI_LBAT_INT_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_chrdet(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_CHRDET_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_CHRDET_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_chrdet(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_CHRDET_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_CHRDET_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_chrdet_edge(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_CHRDET_EDGE_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_CHRDET_EDGE_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_chrdet_edge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_CHRDET_EDGE_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_CHRDET_EDGE_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_baton_lv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BATON_LV_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BATON_LV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_baton_lv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BATON_LV_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BATON_LV_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_baton_hv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BATON_HV_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BATON_HV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_baton_hv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BATON_HV_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BATON_HV_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_baton_bat_in(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BATON_BAT_IN_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BATON_BAT_IN_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_baton_bat_in(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BATON_BAT_IN_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BATON_BAT_IN_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_baton_bat_out(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BATON_BAT_OUT_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BATON_BAT_OUT_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_baton_bat_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BATON_BAT_OUT_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BATON_BAT_OUT_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_rtc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_RTC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_RTC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_rtc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_RTC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_RTC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_rtc_nsec(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_RTC_NSEC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_RTC_NSEC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_rtc_nsec(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_RTC_NSEC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_RTC_NSEC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_bif(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BIF_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BIF_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_bif(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BIF_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BIF_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcdt_hv_det(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON0),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCDT_HV_DET_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCDT_HV_DET_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcdt_hv_det(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON0),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCDT_HV_DET_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCDT_HV_DET_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_thr_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_THR_H_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_THR_H_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_thr_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_THR_H_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_THR_H_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_thr_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_THR_L_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_THR_L_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_thr_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_THR_L_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_THR_L_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_bat_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BAT_H_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BAT_H_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_bat_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BAT_H_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BAT_H_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_bat_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BAT_L_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BAT_L_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_bat_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BAT_L_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BAT_L_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_bat2_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BAT2_H_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BAT2_H_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_bat2_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BAT2_H_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BAT2_H_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_bat2_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BAT2_L_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BAT2_L_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_bat2_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BAT2_L_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BAT2_L_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_bat_temp_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BAT_TEMP_H_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BAT_TEMP_H_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_bat_temp_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BAT_TEMP_H_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BAT_TEMP_H_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_bat_temp_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_BAT_TEMP_L_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_BAT_TEMP_L_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_bat_temp_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_BAT_TEMP_L_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_BAT_TEMP_L_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_auxadc_imp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_AUXADC_IMP_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_AUXADC_IMP_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_auxadc_imp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_AUXADC_IMP_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_AUXADC_IMP_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_nag_c_dltv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_NAG_C_DLTV_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_NAG_C_DLTV_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_nag_c_dltv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_NAG_C_DLTV_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_NAG_C_DLTV_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_jeita_hot(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_JEITA_HOT_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_JEITA_HOT_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_jeita_hot(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_JEITA_HOT_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_JEITA_HOT_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_jeita_warm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_JEITA_WARM_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_JEITA_WARM_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_jeita_warm(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_JEITA_WARM_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_JEITA_WARM_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_jeita_cool(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_JEITA_COOL_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_JEITA_COOL_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_jeita_cool(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_JEITA_COOL_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_JEITA_COOL_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_jeita_cold(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON1),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_JEITA_COLD_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_JEITA_COLD_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_jeita_cold(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON1),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_JEITA_COLD_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_JEITA_COLD_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vproc11_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VPROC11_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VPROC11_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vproc11_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VPROC11_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VPROC11_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vproc12_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VPROC12_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VPROC12_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vproc12_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VPROC12_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VPROC12_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcore_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCORE_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCORE_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcore_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCORE_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCORE_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vgpu_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VGPU_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VGPU_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vgpu_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VGPU_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VGPU_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vdram1_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VDRAM1_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VDRAM1_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vdram1_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VDRAM1_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VDRAM1_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vdram2_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VDRAM2_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VDRAM2_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vdram2_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VDRAM2_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VDRAM2_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vmodem_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VMODEM_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VMODEM_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vmodem_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VMODEM_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VMODEM_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vs1_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VS1_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VS1_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vs1_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VS1_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VS1_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vs2_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VS2_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VS2_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vs2_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VS2_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VS2_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vpa_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VPA_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VPA_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vpa_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VPA_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VPA_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcore_preoc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCORE_PREOC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCORE_PREOC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcore_preoc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCORE_PREOC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCORE_PREOC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_va10_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VA10_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VA10_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_va10_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VA10_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VA10_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_va12_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VA12_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VA12_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_va12_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VA12_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VA12_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_va18_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VA18_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VA18_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_va18_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VA18_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VA18_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vbif28_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VBIF28_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VBIF28_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vbif28_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VBIF28_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VBIF28_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcama1_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON2),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMA1_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMA1_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcama1_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON2),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMA1_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMA1_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcama2_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMA2_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMA2_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcama2_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMA2_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMA2_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vxo18_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VXO18_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VXO18_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vxo18_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VXO18_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VXO18_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcamd1_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMD1_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMD1_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcamd1_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMD1_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMD1_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcamd2_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMD2_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMD2_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcamd2_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMD2_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMD2_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcamio_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMIO_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCAMIO_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcamio_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMIO_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCAMIO_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcn18_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCN18_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCN18_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcn18_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCN18_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCN18_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcn28_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCN28_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCN28_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcn28_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCN28_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCN28_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vcn33_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VCN33_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VCN33_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vcn33_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VCN33_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VCN33_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vtcxo24_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VTCXO24_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VTCXO24_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vtcxo24_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VTCXO24_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VTCXO24_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vemc_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VEMC_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VEMC_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vemc_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VEMC_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VEMC_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vfe28_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VFE28_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VFE28_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vfe28_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VFE28_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VFE28_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vgp_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VGP_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VGP_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vgp_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VGP_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VGP_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vldo28_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VLDO28_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VLDO28_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vldo28_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface((unsigned int)(MT6355_INT_CON3),
				  (&val),
				  (unsigned int)(PMIC_RG_INT_EN_VLDO28_OC_MASK),
				  (unsigned int)(PMIC_RG_INT_EN_VLDO28_OC_SHIFT)
	    );

	return val;
}

unsigned int mt6355_upmu_set_rg_int_en_vio18_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface((unsigned int)(MT6355_INT_CON3),
				    (unsigned int)(val),
				    (unsigned int)(PMIC_RG_INT_EN_VIO18_OC_MASK),
				    (unsigned int)(PMIC_RG_INT_EN_VIO18_OC_SHIFT)
	    );

	return ret;
}

unsigned int mt6355_upmu_get_rg_int_en_vio18_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interfa