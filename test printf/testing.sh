#!/bin/bash

gcc -c 1_printf_main.c
gcc 1_printf_main.o -L. -lftprintf -o main
./main