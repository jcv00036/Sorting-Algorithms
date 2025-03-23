#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

#define ELEM 10

void initial_array(sortable_int_array* arr) {
    int* elements = arr->get;
    int temporary = 0;
    elements[temporary++] = 1;
    elements[temporary++] = 6;
    elements[temporary++] = 4;
    elements[temporary++] = 8;
    elements[temporary++] = 27;
    elements[temporary++] = 2;
    elements[temporary++] = 7;
    elements[temporary++] = 12;
    elements[temporary++] = 46;
    elements[temporary++] = 9;
    *arr = (sortable_int_array){elements, ELEM};
}

int main(void) {
    int* elements = (int*) malloc(sizeof(int) * ELEM);

    sortable_int_array array = {elements, ELEM}; initial_array(&array);
    printf("Initial array: "); sortable_int_array_printf(&array);

    //Insertion sort tryout
    insertion_sort(&array);
    printf("Insertion sorted array: "); sortable_int_array_printf(&array);

    free(elements);
    return 0;
}