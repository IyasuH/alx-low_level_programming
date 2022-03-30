#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int iterBinary(int *array, int start_index, int end_index, int value);

#endif
