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

    int maxSum = arr[0], currentSum = arr[0];
    for (int i = 1; i < n; i++) {
        currentSum = (currentSum + arr[i] > arr[i]) ? currentSum + arr[i] : arr[i];
        maxSum = (maxSum > currentSum) ? maxSum : currentSum;
    }

    printf("The largest sum of contiguous subarray is: %d", maxSum);
    return 0;
}

//Ques. Write a program in C to find the largest sum of contiguous subarrays in an array.