Command line build system for Mozzi
===================================

This directory hosts makefiles that could be used to:

	- build the Mozzi examples from the command line.
	- setup automated CI build testing of the examples.
   
Usage
-----

	make -C "Mozzi-base-dir"/build -f examples.mk clean all
	
Operation
---------

The makefiles, used for building the examples rely on the
Arduino-Makefile software that could be found here:

	https://github.com/sudar/Arduino-Makefile.git

Arduino-Makefile is a git submodule of the Mozzi git
repository. Please refer to the git-submodule man page for updating
and working with submodules.

Building is done in a few steps:

	1. The core gets build and archived into libcore.a. The core could
	be an Arduino, Teensy, etc. core.
	
	2. The Mozzi software and its utilities get built and archived
       into libmozzi.a.

	3. The examples get built and linked with libcore.a and libmozzi.a
