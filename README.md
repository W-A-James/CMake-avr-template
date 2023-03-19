CMake-avr-example
=================

### Overview

[CMake](http://www.cmake.org/) is an awesome cross platform build system. This repository will show you how to setup CMake to work with the AVR toolchain. The instructions below assume you have succesfully installed the AVR toolchain and CMake.



### Getting Started
This example uses the ATTiny84 running at 8Mhz and is programmed using an Arduino as ISP. Modify the definitions in `CMakeLists.txt` as needed:

  * Microcontroller : `set(MCU   attiny84)`
  * Clockspeed : `set(F_CPU 8000000L)`
  * Programmer: `set(PROG_TYPE stk500v1)`



### Cloning, Compiling and flashing
```sh
git clone git@github.com:W-A-James/CMake-avr-template.git
cd CMake-avr-template
cd basic_example
mkdir build
cd build
cmake ..
make flash
```
