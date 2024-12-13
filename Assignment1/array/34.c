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

    int oddElement = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count % 2 != 0) {
            oddElement = arr[i];
            break;
        }
    }

    if (oddElement != -1) {
        printf("The element occurring odd number of times is: %d", oddElement);
    } else {
        printf("No element occurs odd number of times.");
    }

    return 0;
}

//Ques. Write a program in C to find the number occurring odd number of times in an array.
//All numbers occur even number of times except one number which occurs odd number of times.
