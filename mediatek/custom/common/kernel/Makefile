include $(MTK_PATH_BUILD)/common.mk
$(call all-modules-src-or-makefile,$(obj),CUSTOM_KERNEL_)
obj-n := dummy.o
obj-y += sky_i2c_debug_interface.o
obj-y += hwm_info.o

ifeq ($(MTK_ALPS_BOX_SUPPORT), yes)
ccflags-y += -DMTK_ALPS_BOX_SUPPORT
endif
