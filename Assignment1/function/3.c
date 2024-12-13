#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Array 1 is sorted: %s\n", isSorted(arr1, size1) ? "true" : "false");

    int arr2[] = {3, 2, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Array 2 is sorted: %s\n", isSorted(arr2, size2) ? "true" : "false");

    return 0;
}

//Ques. Create a function isSorted that checks if an array is sorted in ascending order. It should return true if the array is sorted and false otherwise.
