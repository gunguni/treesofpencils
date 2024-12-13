#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n, d;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Input elements in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the number of positions to rotate: ");
    scanf("%d", &d);

    rotateArray(arr, n, d);

    printf("The rotated array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

//Ques. Write a program in C to rotate an array by N positions.