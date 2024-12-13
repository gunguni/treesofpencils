#include <stdio.h>

void findFloorAndCeiling(int arr[], int n, int x) {
    int floor = -1, ceiling = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= x) floor = arr[i];
        if (arr[i] >= x && ceiling == -1) ceiling = arr[i];
    }
    printf("Number: %d ceiling is: %d floor is: %d\n", x, ceiling, floor);
}

int main() {
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Input elements in the array (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int x = 0; x <= 10; x++) {
        findFloorAndCeiling(arr, n, x);
    }
    return 0;
}

//Ques. Write a program in C to find the Floor and Ceiling of the number 0 to 10 from a sroted array.