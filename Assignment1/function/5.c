#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int found = 0;
    printf("Duplicate values: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}

//Ques. Write a function findDuplicates that takes an array as input and returns an array of duplicate values (values that appear more than once).
