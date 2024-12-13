#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, count = 0;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Input elements in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(arr[0]), compare);

    for (int i = n - 1; i >= 2; i--) {
        int left = 0, right = i - 1;
        while (left < right) {
            if (arr[left] + arr[right] > arr[i]) {
                count += right - left;
                right--;
            } else {
                left++;
            }
        }
    }

    printf("The number of possible triangles that can be formed is: %d\n", count);
    return 0;
}

//Ques. Write a program in C to count the number of triangles that can be formed from a given array.