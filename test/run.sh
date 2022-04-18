#!/bin/bash
DIR="$(dirname "$(realpath "$0")")"
gcc -Wall -Werror -pedantic -std=gnu89 $DIR/../*.c $DIR/main.c -o $DIR/main && $DIR/main && rm $DIR/main 
