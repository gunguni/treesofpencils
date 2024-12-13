#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int majorityElement = -1, count = 0;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > n / 2) {
            majorityElement = arr[i];
            break;
        }
    }

    if (majorityElement != -1) {
        printf("The majority element in the array is: %d", majorityElement);
    } else {
        printf("There is no majority element in the array.");
    }

    return 0;
}

//Ques. Write a program in C to find the majority element of an array.