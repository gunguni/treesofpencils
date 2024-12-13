#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);
    int matrix1[n][n], matrix2[n][n], result[n][n];
    
    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Ques. Write a program in C for adding two matrices of the same size.