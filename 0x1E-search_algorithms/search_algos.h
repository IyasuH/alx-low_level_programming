#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int iterBinary(int *array, int start_index, int end_index, int value);
int jump_search(int *array, size_t size, int value);
int linear_search_me(int *array, size_t max, size_t min, int value);

#endif
