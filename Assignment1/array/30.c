#include <stdio.h>

int main() {
    int n, m;
    printf("Input the number of rows and columns of the matrices: ");
    scanf("%d %d", &n, &m);
    int matrix1[n][m], matrix2[n][m];
    
    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    int isEqual = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                isEqual = 0;
                break;
            }
        }
    }

    if (isEqual) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}

//Ques. Write a program in C to accept two matrices and check whether they are equal.