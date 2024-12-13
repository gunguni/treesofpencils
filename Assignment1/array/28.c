#include <stdio.h>

int main() {
    int matrix[3][3];
    
    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1]) -
              matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0]) +
              matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);
    
    printf("The Determinant of the matrix is: %d", det);
    return 0;
}

//Ques. Write a program in C to calculate the determinant of a 3 x 3 matrix.