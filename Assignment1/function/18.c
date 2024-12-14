#include <stdio.h>
#include <math.h>
#include <stdbool.h>
                                                                // " I want to mention that i took help of AI in this armstrong problem it was not that hard but confusing at first try " will improve over time.. 
bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num = 153;
    printf("%d is an Armstrong number: %s\n", num, isArmstrong(num) ? "true" : "false");
    return 0;
}

//Ques. Write a function isArmstrong that checks if a number is an Armstrong number. An Armstrong number is a number equal to the sum of its own digits raised to the power of the number of digits.

