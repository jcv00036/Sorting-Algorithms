/**
 * @brief List of sorting algorithms implemented
 * @see insertion.c
 * @see mergesort.c
 * @author Juan Carrasco Vico
 */

#ifndef SORT_H
#define SORT_H

#include "sort_utils.h"
#include <stdlib.h>

/**
 * Sorts the given array using the insertion sort algorithm.
 * @param arr the array to sort
 * @pre arr is not NULL
 * @pre arr.size is not lesser or equal to 0
 */
void insertion_sort(sortable_int_array* arr);

void mergesort(sortable_int_array* arr);

#endif //SORT_H
