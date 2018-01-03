ifeq (y,$(CONFIG_MODULES))
MET_DIR := $(wildcard $(src)/$(subst ",,$(CONFIG_MTK_PLATFORM)))
ifneq ($(MET_DIR),)
    ifeq ($(CONFIG_FTRACE),y)
        ifeq ($(CONFIG_TRACING),y)
            include $(MET_DIR)/core/Kbuild
            MET_PLF_USE := $(shell test -f $(MET_DIR)/platform/Kbuild && echo yes)
            ifeq ($(MET_PLF_USE),yes)
                include $(MET_DIR)/platform/Kbuild
            endif
        endif
    endif
else
    MET_DEF_DIR := $(src)
    include $(MET_DEF_DIR)/default/Kbuild
endif
else
$(warning Not building met.ko due to CONFIG_MODULES is not set)
endif
