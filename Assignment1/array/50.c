#include <stdio.h>

void printSpiral(int rows, int cols, int matrix[rows][cols]) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; col++) {
            printf("%d ", matrix[top][col]);
        }
        top++;
        for (int row = top; row <= bottom; row++) {
            printf("%d ", matrix[row][right]);
        }
        right--;
        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                printf("%d ", matrix[bottom][col]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                printf("%d ", matrix[row][left]);
            }
            left++;
        }
    }
}

int main() {
    int matrix[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    int rows = 4, cols = 5;
    printf("The spiral form of above matrix form is :\n");
    printSpiral(rows, cols, matrix);

    return 0;
}

//Ques. Write a program in C to print a matrix in spiral form.