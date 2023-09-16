#ifndef SEARCH
#define SEARCH

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printArr(int *array, int i, int fin);

#endif

