/*
 * swapping_arrays.c
 *
 *  Created on: Nov 14, 2024
 *      Author: Mohamed Hazem
 */

#include <stdio.h>

void swapArrays(int arr1[], int size1, int arr2[], int size2) {
    int minSize = size1 < size2 ? size1 : size2;

    for (int i = 0; i < minSize; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int arr1[] = {1, 1, 1, 1, 1, 1};
    int arr2[] = {2, 2, 2, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Size1: %d\n", size1);
    printf("Size2: %d\n", size2);

    printf("\nBefore swapping:\nArray 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    swapArrays(arr1, size1, arr2, size2);

    printf("\nAfter swapping:\nArray 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
