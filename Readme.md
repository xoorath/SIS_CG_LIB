
# Environment:
This library is for use on the [codingame](codingame.com/work) platform. All that really means is we're using linux, and producing a regular static library and header file in a zip.

# Requirements:
- cmake 3.2 or newer
- gcc 7.3 or newer

_If you know what you're doing, you can easily get away with older/different versions, or even other compilers; This guide just covers my workflow._

# Quick Start

Install dependancies: 

> `sudo apt-get update`
> `sudo apt-get install build-essential`
> `sudo apt-get cmake`

# How to build:

Move into the build folder:

> `cd Build`

Run cmake on the project directory

> `cmake ..`

Build the library

> `make`

Package the build for codingame

> `make package`

You can find the resulting zip at `Build/sis_cg_lib-0.0.1-Linux.zip`.