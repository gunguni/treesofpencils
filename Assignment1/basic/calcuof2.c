#include <stdio.h>

int main() {
    int num1 = 10, num2 = 5;
    printf("The sum of the given numbers: %d\n", num1 + num2);
    printf("The difference of the given numbers: %d\n", num1 - num2);
    printf("The product of the given numbers: %d\n", num1 * num2);
    printf("The quotient of the given numbers: %.6f\n", (float)num1 / num2);
    return 0;
}