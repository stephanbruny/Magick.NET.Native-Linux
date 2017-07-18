# Magick.NET.Native-Linux
Cloned Magick.NET.Native-Library for Linux

This is a quickly hacked solution, and might not be sufficient for production environments, yet.

## Usage

The compiled .so-File can be used to replace Magick.NET-Qx.Native.dll so Magick.NET can be used on Linux hosts via Mono.

## Prerequesites

- Visual Studio 2017
- Linux-C++-Extension
- an Ubuntu 16.04 remote host (see https://blogs.msdn.microsoft.com/vcblog/2017/04/11/linux-development-with-c-in-visual-studio/)
- ImageMagick and development files (e.g. https://github.com/ImageMagick/ImageMagick)
- libjpeg-dev (sudo apt-get install libjpeg-dev)

## Building

1. Build ImageMagick from source (on Linux host), using the desired Quantum-Setting.
2. Setup Remote-GDB in Visual Studio 2017
3. if necessary, locate include and library files on your host, and set the paths accordingly in the project's options.

TODO...
