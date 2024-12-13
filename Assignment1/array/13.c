#include <stdio.h>

int main() {
    int n, val, i, pos;
    printf("Input number of elements you want to insert (max 100): ");
    scanf("%d", &n);
    int arr[n + 1];

    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Input the value to be inserted: ");
    scanf("%d", &val);
    
    printf("Input the position where the value to be inserted: ");
    scanf("%d", &pos);
    
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    printf("The new list is:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

//Ques.Write a program in C to insert the values in the array (sorted list)