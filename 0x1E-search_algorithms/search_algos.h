#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/* Linear search algorithm */
int linear_search(int *array, size_t size, int value);

/* Binary search algorithm */
int binary_search(int *array, size_t size, int value);

/* Print information of the array */
void print_array(int *array, size_t beg, size_t end);

#endif
