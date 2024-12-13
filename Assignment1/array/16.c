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

    int largest = arr[0], secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("The second largest element in the array is: %d", secondLargest);
    return 0;
}

//Ques. Write a program in C to find the second largest element in an array.