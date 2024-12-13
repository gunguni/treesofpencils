#include <stdio.h>

void subArraySum(int arr[], int size, int target) {
    printf("Subarrays with sum %d:\n", target);
    for (int start = 0; start < size; start++) {
        int sum = 0;
        for (int end = start; end < size; end++) {
            sum += arr[end];
            if (sum == target) {
                printf("[");
                for (int i = start; i <= end; i++) {
                    printf("%d", arr[i]);
                    if (i < end) printf(", ");
                }
                printf("]\n");
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    subArraySum(arr, size, target);

    return 0;
}

//Ques. Write a function subArraySum that finds all the subarrays of a given array that sum up to a target value.

