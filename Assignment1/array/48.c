#include <stdio.h>

int main() {
    int n, x, count = 0;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input elements in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Input the integer to check: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("%d appears more than %d times in the array.\n", x, n / 2);
    } else {
        printf("%d does not appear more than %d times in the array.\n", x, n / 2);
    }
    return 0;
}

//Ques. Write a program in C to find out if a given integer x appears more than n/2 times in a sorted
//array of n integers.