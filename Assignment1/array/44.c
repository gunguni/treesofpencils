#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the array (n+2 elements): ");
    scanf("%d", &n);
    int arr[n + 2];
    
    printf("Input %d elements in the array:\n", n + 2);
    for (int i = 0; i < n + 2; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The repeating elements are: ");
    for (int i = 0; i < n + 2; i++) {
        for (int j = i + 1; j < n + 2; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}

//Ques. Write a program in C to find the two repeating elements in a given array.