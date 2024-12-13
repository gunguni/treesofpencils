#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n], even[n], odd[n], eCount = 0, oCount = 0;
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[eCount++] = arr[i];
        } else {
            odd[oCount++] = arr[i];
        }
    }
    
    printf("The Even elements are:\n");
    for (int i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }
    
    printf("\nThe Odd elements are:\n");
    for (int i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}

//Ques. Write a program in C to separate odd and even integers into separate arrays.