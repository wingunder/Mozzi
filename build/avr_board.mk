# -*- mode: makefile -*-
# Generic Makefile, that can be used as a base for building
# avr examples for Mozzi.
#
# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile

ARDUINO = 105

BOARD_TAG ?= pro328
MCU ?= atmega328p
F_CPU ?= 16000000L

HEX_MAXIMUM_SIZE ?= 32256

DIAGNOSTICS_COLOR_WHEN ?= never
