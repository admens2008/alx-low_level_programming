#!/bin/bash
wget -P .. https://raw.githubusercontent.com/admens2008/alx-low_level_programming/main/0x18-dynamic_libraries/libgowa.so
export LD_PRELOAD="$PWD/ ../libgowa.so"
