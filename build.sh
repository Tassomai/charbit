#!/usr/bin/env bash

cc -v \
   -g \
   -O3 \
   -Wall \
   -Wextra \
   -Wpedantic \
   -march=native \
   -std=c17 \
   -I. \
   -I/usr/include \
   -I/usr/include/python3.7m \
   -I/usr/local/include \
   -L/usr/lib \
   -L/usr/local/lib \
   -lpython3 \
   -shared \
   -o charbit.so \
   charbit.c;
