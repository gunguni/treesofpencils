#include <stdio.h>

int findCeiling(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int n, x;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Input elements in the array (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Input the value to find the ceiling: ");
    scanf("%d", &x);

    int ceiling = findCeiling(arr, n, x);
    if (ceiling == -1) {
        printf("No ceiling found.\n");
    } else {
        printf("The ceiling of %d is: %d\n", x, ceiling);
    }

    return 0;
}

//Ques. Write a program in C to find the ceiling in a sorted array.
//N.B.: Given a sorted array in ascending order and a value x, the ceiling of x is the smallest
//element in array greater than or equal to x, and the floor is the greatest element smaller than or
//equal to x.