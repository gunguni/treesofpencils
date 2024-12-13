#include <stdio.h>

int main() {
    int n, m;
    printf("Input the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m], transpose[m][n];
    
    printf("Input elements in the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Ques. Write a program in C to find the transpose of a given matrix.