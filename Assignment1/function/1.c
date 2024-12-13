#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The maximum value in the array is: %d\n", findMax(arr, size));
    return 0;
}

//Ques. Write a function called findMax that takes an array of integers as input and returns the maximum value in the array.

