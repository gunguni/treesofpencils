#include <stdio.h>

int main() {
    int n, target;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input elements in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Input the target sum: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == target) {
                printf("Subarray found from index %d to %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No subarray found with the given sum.\n");
    return 0;
}

//Ques. Write a program in C to find a subarray with a given sum from the given array.