#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the array (n-1 elements, no duplicates): ");
    scanf("%d", &n);
    int arr[n - 1];
    int total = n * (n + 1) / 2, sum = 0;

    printf("Input %d elements in the array:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The missing number is: %d\n", total - sum);
    return 0;
}

//Ques. Write a program in C to find the missing number in a given array. There are no duplicates in
//the list.
