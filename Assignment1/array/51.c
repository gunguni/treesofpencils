#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int arr[], int n) {
    int maxEndingHere = 0, maxSoFar = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxEndingHere = maxEndingHere + arr[i];
        if (maxSoFar < maxEndingHere) {
            maxSoFar = maxEndingHere;
        }
        if (maxEndingHere < 0) {
            maxEndingHere = 0;
        }
    }
    return maxSoFar;
}

int main() {
    int n, totalSum = 0, maxSumNormal, maxWrap;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input elements in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    maxSumNormal = maxSubarraySum(arr, n);
    if (maxSumNormal < 0) {
        printf("The maximum circular subarray sum is: %d\n", maxSumNormal);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = -arr[i];
    }
    maxWrap = totalSum + maxSubarraySum(arr, n);

    printf("The maximum circular subarray sum is: %d\n", (maxWrap > maxSumNormal) ? maxWrap : maxSumNormal);
    return 0;
}

//Ques.  Write a program in C to find the maximum circular subarray sum of a given array.