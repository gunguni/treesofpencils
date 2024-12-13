#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    
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

    printf("The sum of rows and columns of the matrix is:\n");
    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        printf("Row %d sum: %d\n", i + 1, rowSum);
        printf("Column %d sum: %d\n", i + 1, colSum);
    }
    return 0;
}

//Ques. Write a program in C to find the sum of rows and columns of a matrix.