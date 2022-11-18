#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o libdynamic.so.so *.o
