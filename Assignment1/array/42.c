#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Input elements in the array (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != i) {
            printf("The smallest missing element is: %d\n", i);
            return 0;
        }
    }

    printf("The smallest missing element is: %d\n", n);
    return 0;
}

//Ques. Write a program in C to find the smallest missing element in a sorted array.