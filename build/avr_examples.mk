# -*- mode: makefile -*-
# Generic Makefile, that can be used to compile some directory and
# then link in libmozzi.a and libcore.a.
#
# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile
#
# This Makefile is meant to be run from an example/*/*/ directory.

MOZZI_PATH = $(realpath ../../../)

include $(MOZZI_PATH)/build/avr_board.mk

CXXFLAGS += -Wno-overflow -Wno-char-subscripts -Wno-sign-compare -Wno-unused-variable -Wno-reorder -Wno-narrowing \
-Werror -I$(MOZZI_PATH) -I$(MOZZI_PATH)/utility

USER_LIB_PATH = $(MOZZI_PATH)/build-$(BOARD_TAG)

OTHER_OBJS = $(MOZZI_PATH)/build-$(BOARD_TAG)/libmozzi.a $(MOZZI_PATH)/build/build-$(BOARD_TAG)/libcore.a

ARDMK_DIR = $(MOZZI_PATH)/submodules/Arduino-Makefile

include $(ARDMK_DIR)/Arduino.mk
