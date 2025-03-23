//
// Created by jcarvic on 23/03/25.
//

#include "sort.h"

void insertion_sort(const sortable_int_array *arr) {

    int key = arr->get[0], j = 1;

for (int i = 1; i < arr->size; ++i) {            // Checks every component of the array
    key = arr->get[i];                           // The key will be the element being sorted
    j = i - 1;
    while (j >= 0 && arr->get[j] > key) {        // Checks where the element should be
        arr->get[j + 1] = arr->get[j];           // Shifts the elements higher than the key to make room
        --j;
    }
    arr->get[j + 1] = key;
}
}
