#include <stdio.h>

int main() {
    int n, sum;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the given sum: ");
    scanf("%d", &sum);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair of elements that make the given sum are: %d and %d\n", arr[i], arr[j]);
                return 0;
            }
        }
    }
    
    printf("No pair found with the given sum.\n");
    return 0;
}

//Ques.  Write a program in C to find a pair with given sum in the array