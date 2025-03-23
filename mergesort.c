/**
 * @file mergesort.c
 * @brief Code for the mergesort sorting algorithm
 * @see sort.h
 * @author Juan Carrasco Vico
 */

#include "sort.h"

void __merge(sortable_int_array* arr, int i, int j) {
    int mediumPoint = i + (j - i) / 2;
    int leftIndex = i;
    int rightIndex = mediumPoint + 1;
    int tempIndex = 0;
    int* tempArray = (int*)malloc((j - i + 1) * sizeof(int));

    //For every pair of elements in the array
    while (leftIndex <= mediumPoint && rightIndex <= j) {
        //Includes the shortest element of the two
        if (arr->get[leftIndex] <= arr->get[rightIndex]) {
            tempArray[tempIndex++] = arr->get[leftIndex++];
        } else {
            tempArray[tempIndex++] = arr->get[rightIndex++];
        }
    }

    //And fills the rest with the elements that were not included
    while (leftIndex <= mediumPoint) {
        tempArray[tempIndex++] = arr->get[leftIndex++];
    }

    while (rightIndex <= j) {
        tempArray[tempIndex++] = arr->get[rightIndex++];
    }

    //And passes the values to the original array
    for (int k = i; k <= j; ++k) {
        arr->get[k] = tempArray[k - i];
    }

    free(tempArray);
}

void __mergesort(sortable_int_array *arr, int i, int j) {
    if ( i == j ) return;
    else {
        int mediumPoint = i + (j - i)/2;
        __mergesort(arr, i, mediumPoint);
        __mergesort(arr, mediumPoint + 1, j);
        __merge(arr, i, j);
    }
}

void mergesort(sortable_int_array *arr) { __mergesort(arr, 0, arr->size - 1);}