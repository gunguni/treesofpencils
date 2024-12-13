#include <stdio.h>

int main() {
    int n;
    printf("Input the number of rows and columns of the matrices: ");
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
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The multiplication of two matrices is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Ques. Write a program in C for the multiplication of two square matrices.