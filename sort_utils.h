/**
 * @file sort_utils.h
 * @brief Functions and resources for the algorithms
 * @author Juan Carrasco Vico
 */

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

typedef struct {
    int* get;
    int size;
} sortable_int_array;

/**
 * Prints an array in the following format: [elem1, elem2, elem3, ..., elemN]
 * @param arr the array to print
 */
void sortable_int_array_printf(const sortable_int_array* arr);

/**
 * Swaps the values of two integers
 * @param a the first integer
 * @param b the second integer
 */
void swap(int* a, int* b);
#endif //UTILS_H
