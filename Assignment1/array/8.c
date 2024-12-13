#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("The frequency of all elements of the array:\n");
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; 
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}

//Ques. Write a program in C to count the frequency of each element of an array.