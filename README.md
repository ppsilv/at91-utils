## Eu fiz esse fork para testar se esse program consegue fazer o upload para a cpu at91sam9261


This is a python utility for Atmel's SAM family of ARM microcontrollers. 
The motivation behind the script is to create a simple, easy-to-use, open source, command line only utility to replace Atmel's SAM-BA software. 

The package contains python script and a small piece of firmware (applet) which intend to run in the internal SRAM
Python sctipt is a command line utility which provides also interactive mode

The applet(s) are modular and highly configurable code. The idea is to have a single source tree which contains firmware for all CPUs/boards
Before loading the firmware user is expected to run configuration utility and buils the BIN image. Python script can configure and compile
the firmware on demand. 


For compilation of applets

Install the toochain:

	sudo add-apt-repository ppa:terry.guo/gcc-arm-embedded
	sudo apt-get update
	sudo apt-get install gcc-arm-none-eabi

Run make
	make -C ./at91-utils/applets
    

