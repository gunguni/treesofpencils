#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Input %d elements in the array:\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    
    printf("Input the number of elements to be stored in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Input %d elements in the array:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) merged[i] = arr1[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];
    
    for (int i = 0; i < n1 + n2 - 1; i++) {
        for (int j = i + 1; j < n1 + n2; j++) {
            if (merged[i] < merged[j]) {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }
    
    printf("The merged array in descending order is:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}

//Ques. Write a program in C to merge two arrays of the same size sorted in descending order.
