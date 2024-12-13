#include <stdio.h>

int main() {
    int n1, n2;
    printf("Input the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Input elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Input the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Input elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2], i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n1) merged[k++] = arr1[i++];
    while (j < n2) merged[k++] = arr2[j++];

    printf("The merged array is:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}

//Ques. Write a program in C to merge one sorted array into another sorted array.
//Pivot element is the only element in input array which is smaller than it's previous element.
//A pivot element divided a sorted rotated array into two monotonically increasing array.
