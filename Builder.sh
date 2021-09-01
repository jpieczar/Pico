#!/bin/sh

mkdir build
cd build;
rm -rf *;
cmake -DPICO_SDK_PATH=../../pico-sdk .. && make -j4;
