#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Input elements in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Bigger Elements Array:\n");
    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d ", next);
    }
    return 0;
}

//ques. Write a program in C to print the next greatest elements in a given unsorted array. Elements
//for which no superior element exists, consider the next greatest element as -1.