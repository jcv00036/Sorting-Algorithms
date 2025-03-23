//
// Created by jcarvic on 23/03/25.
//

#ifndef SORT_H
#define SORT_H

#include "sort_utils.h"

/**
 * Sorts the given array using the insertion sort algorithm.
 * @param arr the array to sort
 * @pre arr is not NULL
 * @pre arr.size is not lesser or equal to 0
 */
void insertion_sort(const sortable_int_array* arr);

#endif //SORT_H
