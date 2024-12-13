#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            printf("The Pivot Element in the array is: %d\n", arr[i]);
            return 0;
        }
    }

    printf("No pivot element found.\n");
    return 0;
}

//Ques. Write a program in C to find the pivot element of a sorted and rotated array using binary
//search.