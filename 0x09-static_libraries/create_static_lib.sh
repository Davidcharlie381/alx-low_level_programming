#!/bin/bash
gcc -c -Wall -pedantic -Wextra *.c
ar -rcs liball.a *.o
