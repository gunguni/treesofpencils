#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    int sum = 0;

    printf("Input elements in the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - i - 1];
    }

    printf("Addition of the right diagonal elements is: %d", sum);
    return 0;
}

//Ques. Write a program in C to find the sum of the right diagonals of a matrix.