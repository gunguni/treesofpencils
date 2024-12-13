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

    printf("Input the number to count occurrences of: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("The number %d occurs %d times in the array.\n", x, count);
    return 0;
}

//Ques. Write a program in C to find the number of times a given number appears in an array.