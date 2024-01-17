#!/bin/bash
gcc -c -Wall -Werror *.c
gcc -shared -o liball.so *.o
