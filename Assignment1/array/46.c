#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n], present[1001] = {0};
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0 && arr[i] < 1001) {
            present[arr[i]] = 1;
        }
    }

    for (int i = 1; i <= 1000; i++) {
        if (!present[i]) {
            printf("The smallest positive missing number is: %d\n", i);
            return 0;
        }
    }

    printf("All numbers up to 1000 are present.\n");
    return 0;
}

//Ques.  Write a program in C to find the smallest positive number missing from an unsorted array.