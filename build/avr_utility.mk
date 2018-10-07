# -*- mode: makefile -*-
# Generic Makefile, that can be used to build the utilities of libmozzi.a.
#
# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile
#
# This Makefile is meant to be run from <the main Mozzi direcory>/*/ directory.

MOZZI_PATH := $(realpath ..)

include $(MOZZI_PATH)/build/avr_board.mk

ARDMK_DIR  := $(MOZZI_PATH)/submodules/Arduino-Makefile

CXXFLAGS += -I. -I..

include $(ARDMK_DIR)/Arduino.mk

build-$(BOARD_TAG)/libmozzi_utility.a: $(LOCAL_OBJS)
	$(AR) rcs $@ $(LOCAL_OBJS)
