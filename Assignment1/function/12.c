#include <stdio.h>

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base = 2;
    int exponent = 3;
    printf("%.2f raised to the power of %d is: %.2f\n", base, exponent, power(base, exponent));
    return 0;
}

//Ques. Write a function power that takes two arguments: base and exponent, and returns the result of raising the base to the exponent.
