//
// Created by jcarvic on 23/03/25.
//

#include "sort_utils.h"

void sortable_int_array_printf(const sortable_int_array *arr) {
    printf("[");
    for (int i = 0; i < arr->size; ++i) {
        printf((i < arr->size - 1 ? "%d, " : "%d"), arr->get[i]);
    }
    printf("]\n");
}
