# -*- mode: makefile -*-
# Generic Makefile, that can be used to build libcore.a.
#
# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile
#
# This Makefile is meant to be run from an build/ directory.

MOZZI_PATH = $(realpath ..)

include $(MOZZI_PATH)/build/avr_board.mk

ARDMK_DIR = $(MOZZI_PATH)/submodules/Arduino-Makefile

include $(ARDMK_DIR)/Arduino.mk

duff.cpp:
	>$@

$(CORE_LIB): duff.cpp

core: $(CORE_LIB)
