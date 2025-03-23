//
// Created by jcarvic on 23/03/25.
//

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

#endif //UTILS_H
