#
# Copyright (C) 2015 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#

obj-y += fliper/
obj-y += perfmgr/
obj-y += smart/
obj-y += eas_controller/
obj-$(CONFIG_MACH_MT6757) += perf_ioctl/
obj-$(CONFIG_MACH_MT6763) += perf_ioctl/
obj-$(CONFIG_MACH_MT6739) += perf_ioctl/
obj-$(CONFIG_MACH_MT6758) += perf_ioctl/

obj-$(CONFIG_MACH_MT6799) += legacy_controller/
obj-$(CONFIG_MACH_MT6757) += legacy_controller/
obj-$(CONFIG_MACH_MT6759) += legacy_controller/
obj-$(CONFIG_MACH_MT6763) += legacy_controller/
obj-$(CONFIG_MACH_MT6739) += legacy_controller/
obj-$(CONFIG_MACH_MT6758) += legacy_controller/

obj-$(CONFIG_MTK_FPSGO) += fpsgo/
ifneq ($(wildcard $(srctree)/drivers/misc/mediatek/performance/perfmgr/$(MTK_PLATFORM)/),)
   obj-y += fbc/
endif
