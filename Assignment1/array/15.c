#include <stdio.h>

int main() {
    int n, pos;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Position You Want To Delete: ");
    scanf("%d", &pos);
    
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("The new list is:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

//Ques. Write a program in C to delete an element at a desired position from an array.
