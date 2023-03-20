#!/bin/bash
gcc -fPIC -o *.c
gcc -shared -o liball.so *.o
