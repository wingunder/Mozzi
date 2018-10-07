# -*- mode: makefile -*-
# Generic Makefile, that can be used to build all the examples.
#
# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile

MOZZI_PATH = $(realpath ..)

include $(MOZZI_PATH)/build/avr_board.mk

ARDMK_DIR = $(MOZZI_PATH)/submodules/Arduino-Makefile/

SUBDIRS = $(shell find $(MOZZI_PATH)/examples -mindepth 2 -maxdepth 2 -type d \
|grep \
-ve \/build- \
-ve \/Sinewave_Pinchange_Interrupt\
-ve \/MIDI_portamento \
-ve \/Teensy_USB_MIDI_Input \
-ve \/Mozzi_MIDI_Input \
-ve \/Audio_Input \
-ve \/Audio_and_Control_Input \
)

TARGETS = $(shell echo $(SUBDIRS) |sed -e 's/\ /\n/g' |awk -F'/' '{print $$0 "/build-$(BOARD_TAG)/" $$(NF-1) ".hex"}')
TARGET_DIRS = $(foreach target,$(TARGETS),$(dir $(target)))

all: $(TARGETS)

$(TARGETS): $(MOZZI_PATH)/build-$(BOARD_TAG)/libmozzi.a $(TARGET_DIRS)
	$(MAKE) -C $(subst /build-$(BOARD_TAG)/,,$(dir $@)) -f $(MOZZI_PATH)/build/avr_examples.mk

$(TARGET_DIRS): $(MOZZI_PATH)/build/build-$(BOARD_TAG)/libcore.a
	ln -sf $(MOZZI_PATH)/build/build-$(BOARD_TAG) $(subst /build-$(BOARD_TAG)/,,$@)

$(MOZZI_PATH)/build-$(BOARD_TAG)/libmozzi.a:
	$(MAKE) -C $(MOZZI_PATH) -f $(MOZZI_PATH)/build/avr_mozzi.mk $@

$(MOZZI_PATH)/build/build-$(BOARD_TAG)/libcore.a: $(MOZZI_PATH)/build/duff.cpp
	$(MAKE) -C $(MOZZI_PATH)/build -f $(MOZZI_PATH)/build/avr_core.mk core

$(MOZZI_PATH)/build/duff.cpp:
	>$@

clean::
	$(MAKE) -C $(MOZZI_PATH) -f $(MOZZI_PATH)/build/avr_mozzi.mk clean
	rm -rf $(foreach dir,$(SUBDIRS) $(MOZZI_PATH)/examples,$(dir)/build-$(BOARD_TAG))
	rm -rf $(MOZZI_PATH)/build/build-$(BOARD_TAG) $(MOZZI_PATH)/build/duff.cpp
