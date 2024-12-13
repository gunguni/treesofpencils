#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minSum = abs(arr[0] + arr[1]), pair1 = arr[0], pair2 = arr[1];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = abs(arr[i] + arr[j]);
            if (sum < minSum) {
                minSum = sum;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }

    printf("The pair of elements whose sum is closest to zero are: %d and %d\n", pair1, pair2);
    return 0;
}

//Ques. Write a program in C to find two elements whose sum is closest to zero.