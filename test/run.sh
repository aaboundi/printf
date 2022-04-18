#!/bin/bash
gcc -Wall -Werror -pedantic -std=gnu89 ../*.c main.c -o main && ./main && rm ./main
