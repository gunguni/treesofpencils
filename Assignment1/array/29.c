#include <stdio.h>

int main() {
    int n, m;
    printf("Input the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    int zeroCount = 0;

    printf("Input elements in the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    printf("The given matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (zeroCount > (n * m) / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    printf("There are %d number of zeros in the matrix.", zeroCount);
    return 0;
}

//Ques. Write a program in C to accept a matrix and determine whether it is a sparse matrix.