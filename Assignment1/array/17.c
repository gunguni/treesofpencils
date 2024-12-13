#include <stdio.h>

int main() {
    int n;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0], secondSmallest = 9999;
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("The second smallest element in the array is: %d", secondSmallest);
    return 0;
}

//Ques. Write a program in C to find the second smallest element in an array.