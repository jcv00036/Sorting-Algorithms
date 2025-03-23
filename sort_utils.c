/**
 * @brief Implementation of the functions listed in sort_utils.h
 * @see sort_utils.h
 * @author Juan Carrasco Vico
 */
#include "sort_utils.h"

void sortable_int_array_printf(const sortable_int_array *arr) {
    printf("[");
    for (int i = 0; i < arr->size; ++i) {
        printf((i < arr->size - 1 ? "%d, " : "%d"), arr->get[i]);
    }
    printf("]\n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}