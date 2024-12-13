#include <stdio.h>

void reverseArray(int arr[], int size, int reversed[]) {
    for (int i = 0; i < size; i++) {
        reversed[i] = arr[size - 1 - i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int reversed[size];
    
    reverseArray(arr, size, reversed);
    
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");
    
    return 0;
}

//Ques. Write a function reverseArray that takes an array as input and returns a new array that is the reverse of the original array.
