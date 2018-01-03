/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/

#include "mach/mtk_ppm_api.h"
#include "mtk_spm_resource_req.h"
#ifdef CONFIG_MTK_EMI
#include <mt_emi_api.h>
#endif
#include "gl_typedef.h"

#ifndef MTK_WCN_BUILT_IN_DRIVER
#include "connectivity_build_in_adapter.h"
#endif
#define MAX_CPU_FREQ     23400000

int kalBoostCpu(unsigned int level)
{
#if 0
	unsigned long freq = MAX_CPU_FREQ;

	if (level >= 1)
#ifndef MTK_WCN_BUILT_IN_DRIVER
		KERNEL_spm_resource_req(SPM_RESOURCE_USER_CONN, SPM_RESOURCE_ALL); /* Disable deepidle/SODI */
#else
		spm_resource_req(SPM_RESOURCE_USER_CONN, SPM_RESOURCE_ALL); /* Disable deepidle/SODI */
#endif
	else
#ifndef MTK_WCN_BUILT_IN_DRIVER
		KERNEL_spm_resource_req(SPM_RESOURCE_USER_CONN, 0); /* Enable deepidle/SODI */
#else
		spm_resource_req(SPM_RESOURCE_USER_CONN, 0); /* Enable deepidle/SODI */
#endif

	freq = level == 0 ? 0 : freq;

#ifndef MTK_WCN_BUILT_IN_DRIVER
	KERNEL_mt_ppm_sysboost_freq(BOOST_BY_WIFI, freq);
#else
	mt_ppm_sysboost_freq(BOOST_BY_WIFI, freq);
#endif
#endif
	return 0;
}

#ifdef CONFIG_MTK_EMI
VOID kalSetEmiMpuProtection(phys_addr_t emiPhyBase, UINT_32 size, BOOLEAN enable)
{
	struct emi_region_info_t region_info;

	/*set MPU for EMI share Memory */
	region_info.start = emiPhyBase;
	region_info.end = emiPhyBase + size - 1;
	region_info.region = 18;
	SET_ACCESS_PERMISSION(region_info.apc, UNLOCK, FORBIDDEN, FORBIDDEN, FORBIDDEN, FORBIDDEN,
			      FORBIDDEN, FORBIDDEN, FORBIDDEN, FORBIDDEN, FORBIDDEN, FORBIDDEN,
			      FORBIDDEN, FORBIDDEN, FORBIDDEN, NO_PROTECTION, FORBIDDEN,
			      enable ? FORBIDDEN:NO_PROTECTION);
	emi_mpu_set_protection(&region_info);
}
#endif

