#include <stdio.h>

void rotateArray(int arr[], int size, int k) {
    k = k % size; 
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[(i + k) % size] = arr[i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateArray(arr, size, k);

    printf("Rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//Ques. Write a function rotateArray that rotates an array k positions to the right.

