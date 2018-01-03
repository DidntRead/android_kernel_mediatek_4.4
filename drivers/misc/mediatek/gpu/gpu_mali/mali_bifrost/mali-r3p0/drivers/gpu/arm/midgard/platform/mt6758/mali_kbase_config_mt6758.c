/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */





#include <linux/ioport.h>
#include <mali_kbase.h>
#include <mali_kbase_defs.h>
#include <mali_kbase_config.h>
#include "mali_kbase_config_platform.h"

#include <linux/of.h>
#include <linux/of_address.h>
#include <linux/device.h>
#include <linux/ioport.h>
#include <linux/delay.h>
#include <linux/of.h>
#include <linux/of_address.h>
#include <linux/mutex.h>
#include <linux/proc_fs.h>


#include "mali_kbase_cpu_mt6758.h"
#include "mtk_config_mt6758.h"
#include "platform/mtk_platform_common.h"

#include "mtk_gpufreq.h"

#include "ged_dvfs.h"


#define HARD_RESET_AT_POWER_OFF 0

struct mtk_config *g_config;
volatile void *g_MFG_base;
int g_curFreqID;
int g_vgpu_ref_count;

static DEFINE_MUTEX(mtk_pm_callback_lock);

static int _mtk_pm_callback_power_on(void)
{
#if 1
	struct mtk_config *config = g_config;
	u32 val;

	if (!config) {
		pr_alert("[MALI] power_on: mtk_config is NULL\n");
		return -1;
	}

	mutex_lock(&mtk_pm_callback_lock);
	/*pr_alert("[MALI] start power on..\n");*/

	/* Step1: turn gpu pmic power */
	/* mt_gpufreq_voltage_enable_set(1); */
	mt_gpufreq_voltage_low_power_mode_set(0);

	/* Step2: turn on clocks by sequence */
	MTKCLK_prepare_enable(clk_mfg0);
	MTKCLK_prepare_enable(clk_mfg1);
	MTKCLK_prepare_enable(clk_mfg2);
	MTKCLK_prepare_enable(clk_mfg3);

	/* set Sync step before enable CG, bit[11:10]=01 */
	udelay(100);
	val = readl(g_MFG_base + 0x20);
	val = (val & ~(0x800));
	val = (val | (0x400));
	writel(val, g_MFG_base + 0x20);
	udelay(100);

	/* Step3: turn on CG */
	MTKCLK_prepare_enable(clk_mfg_cg);

	/* set g_vgpu_power_on_flag to MTK_VGPU_POWER_ON */
	mtk_set_vgpu_power_on_flag(MTK_VGPU_POWER_ON);
	g_vgpu_ref_count++;

	/* resume frequency before power off */
	mtk_set_mt_gpufreq_target(g_curFreqID);

	/* write merge */
	val = readl(g_MFG_base + 0x8b0);
	writel(val & ~(0x1), g_MFG_base + 0x8b0);

	/*pr_alert("[MALI] power on!, curFreqID(%d), vgpu_ref_count(%d)\n", g_curFreqID, g_vgpu_ref_count);*/
	/* DFP init (for fast dvfs) */
	/* writel(0xffffffff, config->mfg_register + 0x3c0); */
	/* writel(0xffffffff, config->mfg_register + 0x3c4); */
	/* writel(0xffffffff, config->mfg_register + 0x3c8); */
	/* writel(0xffffffff, config->mfg_register + 0x3cc); */
	/* writel(0xffffffff, config->mfg_register + 0x3d0); */
	/* writel(0x3, config->dfp_register + 0x004); */
	/* writel(0x1, config->dfp_register + 0x010); */
	/* writel(0x1, config->dfp_register + 0x014);*/

	/* mtk_notify_sspm_fdvfs_gpu_pow_status(MTK_VGPU_POWER_ON); */
#ifdef ENABLE_COMMON_DVFS
	ged_dvfs_gpu_clock_switch_notify(1);
#endif
	mutex_unlock(&mtk_pm_callback_lock);
#endif
	return 1;
}

static void _mtk_pm_callback_power_off(void)
{
#if 1
	struct mtk_config *config = g_config;
	int timeout = 10000;
	unsigned int val;

	if (!config) {
		pr_alert("[MALI] power_off: mtk_config is NULL\n");
		return;
	}

	mutex_lock(&mtk_pm_callback_lock);

#ifdef ENABLE_COMMON_DVFS
		ged_dvfs_gpu_clock_switch_notify(0);
#endif

	/*pr_alert("[MALI] start power off..\n");*/
	/* mtk_notify_sspm_fdvfs_gpu_pow_status(MTK_VGPU_POWER_OFF); */

	/* Wait for MFG idle. Total 4 steps. */

	/* Step 1. (0x130000b0) bit 0 = 0x0 */
	val = readl(config->mfg_register + 0xb0);
	writel(val & ~(0x1), config->mfg_register + 0xb0);
	val = readl(config->mfg_register + 0xb0);

	/* Step 2. (0x13000010) bit 17 = 0x1 */
	/* val = readl(config->mfg_register + 0x10); */
	/* writel(val | (0x1 << 17), config->mfg_register + 0x10); */
	/* val = readl(config->mfg_register + 0x10); */
	val = readl(config->mfg_register + 0xb4);
	val &= 0xfffffffd;
	val |= 0x00000001;
	writel(val, config->mfg_register + 0xb4);

	/* Step 3. (0x13000180) bit [7:0] = 0x3 */
	val = readl(config->mfg_register + 0x180);
	writel((val & ~(0xFF)) | 0x3, config->mfg_register + 0x180);
	val = readl(config->mfg_register + 0x180);

	/* Step 4. (0x13000188) bit 2 = 0x1 => 1 for idle, 0 for non-idle */
	val = readl(config->mfg_register + 0x188);
	while ((val&0x4) != 0x4) {
		if (timeout-- <= 0) {
			pr_alert("[MALI] polling timeout!\n");
			break;
		}

		udelay(1);
		val = readl(config->mfg_register + 0x188);
	}

	g_curFreqID = mt_gpufreq_get_cur_freq_index();
	mtk_set_vgpu_power_on_flag(MTK_VGPU_POWER_OFF);
	g_vgpu_ref_count--;

	MTKCLK_disable_unprepare(clk_mfg_cg);
	MTKCLK_disable_unprepare(clk_mfg3);
	MTKCLK_disable_unprepare(clk_mfg2);
	MTKCLK_disable_unprepare(clk_mfg1);
	MTKCLK_disable_unprepare(clk_mfg0);

	/*mt_gpufreq_voltage_enable_set(0);*/
	mt_gpufreq_voltage_low_power_mode_set(1);

	/*pr_alert("[MALI] power off! vgpu_ref_count(%d)\n", g_vgpu_ref_count);*/
	mutex_unlock(&mtk_pm_callback_lock);
#endif
}

static int _mtk_pm_callback_power_resume(void)
{
#if 1
	struct mtk_config *config = g_config;

	if (!config) {
		pr_alert("[MALI] power_resume: mtk_config is NULL\n");
		return -1;
	}

	mutex_lock(&mtk_pm_callback_lock);
	/*pr_alert("[MALI] start power resume..\n");*/

	mt_gpufreq_voltage_enable_set(1);
	mtk_set_vgpu_power_on_flag(MTK_VGPU_POWER_ON);

	pr_alert("[MALI] power resume!\n");
	mutex_unlock(&mtk_pm_callback_lock);
#endif

	return 1;
}

static void _mtk_pm_callback_power_suspend(void)
{
#if 1
	struct mtk_config *config = g_config;

	if (!config) {
		pr_alert("[MALI] power_suspend: mtk_config is NULL\n");
		return;
	}

	mutex_lock(&mtk_pm_callback_lock);
	/*pr_alert("[MALI] start power suspend.. vgpu_ref_count(%d)\n", g_vgpu_ref_count);*/

	mtk_set_vgpu_power_on_flag(MTK_VGPU_POWER_OFF);
	mt_gpufreq_voltage_enable_set(0);
	mdelay(3);

	pr_alert("[MALI] power suspend!\n");
	mutex_unlock(&mtk_pm_callback_lock);
#endif
}

/**
 * MTK internal io map function
 *
*/
static void *_mtk_of_ioremap(const char *node_name)
{
	struct device_node *node;

	node = of_find_compatible_node(NULL, NULL, node_name);

	if (node)
		return of_iomap(node, 0);

	pr_err("[MALI] cannot find [%s] of_node, please fix me\n", node_name);
	return NULL;
}

static int pm_callback_power_on(struct kbase_device *kbdev)
{
	_mtk_pm_callback_power_on();
	return 1;
}

static void pm_callback_power_off(struct kbase_device *kbdev)
{
#if HARD_RESET_AT_POWER_OFF
	/* Cause a GPU hard reset to test whether we have actually idled the GPU
	 * and that we properly reconfigure the GPU on power up.
	 * Usually this would be dangerous, but if the GPU is working correctly it should
	 * be completely safe as the GPU should not be active at this point.
	 * However this is disabled normally because it will most likely interfere with
	 * bus logging etc.
	 */
	KBASE_TRACE_ADD(kbdev, CORE_GPU_HARD_RESET, NULL, NULL, 0u, 0);
	kbase_os_reg_write(kbdev, GPU_CONTROL_REG(GPU_COMMAND), GPU_COMMAND_HARD_RESET);
#endif
	_mtk_pm_callback_power_off();
}

static void pm_callback_power_resume(struct kbase_device *kbdev)
{
	_mtk_pm_callback_power_resume();
}

static void pm_callback_power_suspend(struct kbase_device *kbdev)
{
#if HARD_RESET_AT_POWER_OFF
	/* Cause a GPU hard reset to test whether we have actually idled the GPU
	 * and that we properly reconfigure the GPU on power up.
	 * Usually this would be dangerous, but if the GPU is working correctly it should
	 * be completely safe as the GPU should not be active at this point.
	 * However this is disabled normally because it will most likely interfere with
	 * bus logging etc.
	 */
	KBASE_TRACE_ADD(kbdev, CORE_GPU_HARD_RESET, NULL, NULL, 0u, 0);
	kbase_os_reg_write(kbdev, GPU_CONTROL_REG(GPU_COMMAND), GPU_COMMAND_HARD_RESET);
#endif
	_mtk_pm_callback_power_suspend();
}

struct kbase_pm_callback_conf pm_callbacks = {
	.power_on_callback = pm_callback_power_on,
	.power_off_callback = pm_callback_power_off,
	.power_suspend_callback	 = NULL,
	.power_resume_callback = NULL,
	.mtk_power_suspend_callback	= pm_callback_power_suspend,
	.mtk_power_resume_callback = pm_callback_power_resume
};

static struct kbase_platform_config versatile_platform_config = {
#ifndef CONFIG_OF
	.io_resources = &io_resources
#endif
};

struct kbase_platform_config *kbase_get_platform_config(void)
{
	return &versatile_platform_config;
}


int kbase_platform_early_init(void)
{
	/* Nothing needed at this stage */
	return 0;
}

static int gpu_counter_proc_show(struct seq_file *m, void *v)
{
	struct mtk_config *config = g_config;
	unsigned int val_gpu_active;
	unsigned int val_js0_active;

	mutex_lock(&mtk_pm_callback_lock);
	if (mtk_get_vgpu_power_on_flag()) {
		writel(0x1, config->dfp_register + 0x014);
		val_gpu_active = readl(config->dfp_register + 0x154);
		val_js0_active = readl(config->dfp_register + 0x158);
	} else {
		val_gpu_active = 0;
		val_js0_active = 0;
	}
	mutex_unlock(&mtk_pm_callback_lock);

	seq_printf(m, "val_gpu_active = 0x%x\n", val_gpu_active);
	seq_printf(m, "val_js0_active = 0x%x\n\n", val_js0_active);

	return 0;
}

static int gpu_counter_open_callback(struct inode *inode, struct  file *file)
{
	return single_open(file, gpu_counter_proc_show, PDE_DATA(inode));
}

static const struct file_operations gpu_counter_fops = {
	.owner = THIS_MODULE,
	.open  = gpu_counter_open_callback,
	.read  = seq_read,
	.llseek	 = seq_lseek,
	.release = single_release,
};

int mtk_platform_init(struct platform_device *pdev, struct kbase_device *kbdev)
{
	struct mtk_config *config;
	struct proc_dir_entry *dir;

	if (!pdev || !kbdev) {
		pr_alert("[MALI] input parameter is NULL\n");
		return -1;
	}

	config = (struct mtk_config *)kbdev->mtk_config;
	if (!config) {
		pr_alert("[MALI] Alloc mtk_config\n");
		config = kmalloc(sizeof(struct mtk_config), GFP_KERNEL);
		if (config == NULL) {
			pr_alert("[MALI] Fail to alloc mtk_config\n");
			return -1;
		}
		g_config = kbdev->mtk_config = config;
	}

	config->mfg_register = g_MFG_base = _mtk_of_ioremap("mediatek,g3d_config");
	if (g_MFG_base == NULL) {
		pr_alert("[MALI] Fail to remap MGF register\n");
		return -1;
	}

	config->dfp_register = _mtk_of_ioremap("mediatek,dfp");
	if (config->dfp_register == NULL) {
		pr_alert("[MALI] Fail to remap dfp register\n");
		return -1;
	}

	config->clk_mfg0 = devm_clk_get(&pdev->dev, "mtcmos-mfg0");
	if (IS_ERR(config->clk_mfg0)) {
		pr_alert("cannot get mtcmos-mfg0\n");
		return PTR_ERR(config->clk_mfg0);
	}

	config->clk_mfg1 = devm_clk_get(&pdev->dev, "mtcmos-mfg1");
	if (IS_ERR(config->clk_mfg1)) {
		pr_alert("cannot get mtcmos-mfg1\n");
		return PTR_ERR(config->clk_mfg1);
	}

	config->clk_mfg2 = devm_clk_get(&pdev->dev, "mtcmos-mfg2");
	if (IS_ERR(config->clk_mfg2)) {
		pr_alert("cannot get mtcmos-mfg2\n");
		return PTR_ERR(config->clk_mfg2);
	}

	config->clk_mfg3 = devm_clk_get(&pdev->dev, "mtcmos-mfg3");
	if (IS_ERR(config->clk_mfg3)) {
		pr_alert("cannot get mtcmos-mfg3\n");
		return PTR_ERR(config->clk_mfg3);
	}


	config->clk_mfg_cg = devm_clk_get(&pdev->dev, "subsys-mfg-cg");
	if (IS_ERR(config->clk_mfg_cg)) {
		pr_alert("cannot get subsys-mfg-cg\n");
		return PTR_ERR(config->clk_mfg_cg);
	}

	pr_alert("xxxx clk_mfg0:%p\n", config->clk_mfg0);
	pr_alert("xxxx clk_mfg1:%p\n", config->clk_mfg1);
	pr_alert("xxxx clk_mfg2:%p\n", config->clk_mfg2);
	pr_alert("xxxx clk_mfg3:%p\n", config->clk_mfg3);
	pr_alert("xxxx clk_mfg_cg:%p\n", config->clk_mfg_cg);

	dir = proc_mkdir("gpu_counter", NULL);
	proc_create("gpu_counter", S_IRUGO | S_IWUSR | S_IWGRP, dir, &gpu_counter_fops);

	return 0;
}
