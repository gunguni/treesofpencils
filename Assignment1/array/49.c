#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input elements in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int majorityElement = -1, count = 0;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > n / 2) {
            majorityElement = arr[i];
            break;
        }
    }

    if (majorityElement != -1) {
        printf("The majority element is: %d\n", majorityElement);
    } else {
        printf("No majority element found.\n");
    }
    return 0;
}

//Ques. Write a program in C to find the majority element of an array.