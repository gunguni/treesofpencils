#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n], unique[n], count = 0;
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[count++] = arr[i];
        }
    }
    
    printf("The unique elements found in the array are:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}

//Ques. Write a program in C to print all unique elements in an array.
