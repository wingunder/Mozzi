# AutoMap Testing
#
# Copyright 2018 Pieter du Preez <pdupreez@gmail.com>
#
# This file is part of Mozzi.
#
# Mozzi is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

all: test_autoMap

WProgram.h:
	>WProgram.h

test_autoMap: main.cpp WProgram.h
	g++ -DTESTING_AUTOMAP -DARDUINO=0 -I../.. -I. -Wall -o $@ $<

clean:
	rm -f test_autoMap WProgram.h
