#!/bin/bash

cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c 1_gnl_main.c  -o gnl_test
./gnl_test