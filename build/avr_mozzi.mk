# -*- mode: makefile -*-
# Generic Makefile, that can be used to build libmozzi.a.
#
# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile
#
# This Makefile is meant to be run from <the main Mozzi directory>.

MOZZI_PATH = $(realpath .)

include $(MOZZI_PATH)/build/avr_board.mk

ARDMK_DIR = $(MOZZI_PATH)/submodules/Arduino-Makefile/

SUBDIRS := utility

CXXFLAGS += -fno-strict-aliasing -Werror -I. $(patsubst %,-I%,$(SUBDIRS))

include $(ARDMK_DIR)/Arduino.mk

SUBDIR_ARCHIVES := $(foreach dir,$(SUBDIRS),$(dir)/build-$(BOARD_TAG)/libmozzi_$(dir).a)

$(SUBDIR_ARCHIVES):
	$(MAKE) -C $(subst /build-$(BOARD_TAG)/,,$(dir $@)) -f $(MOZZI_PATH)/build/avr_$(subst /build-$(BOARD_TAG)/,,$(dir $@)).mk build-$(BOARD_TAG)/libmozzi_$(subst /build-$(BOARD_TAG)/,,$(dir $@)).a

$(MOZZI_PATH)/build-$(BOARD_TAG)/libmozzi.a: $(LOCAL_OBJS) $(SUBDIR_ARCHIVES)
	$(AR) rcs $@ $(LOCAL_OBJS) $(foreach dir,$(SUBDIRS),$(patsubst %,$(dir)/build-$(BOARD_TAG)/%,$(shell avr-ar t $(dir)/build-pro328/libmozzi_$(dir).a)))

clean::
	rm -rf $(foreach dir,$(SUBDIRS),$(dir)/build-$(BOARD_TAG))
