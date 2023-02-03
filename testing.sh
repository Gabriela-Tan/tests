#!/bin/bash

gcc -c 1_libft_main.c
gcc 1_libft_main.o -L. -lft -o main
./main