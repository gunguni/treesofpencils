#include <stdio.h>

float calculate(float num1, float num2, char operator) {
    switch (operator) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num2 != 0 ? num1 / num2 : 0; 
        default: return 0; 
    }
}

int main() {
    float num1 = 5, num2 = 3;
    char operator = '+';
    printf("Result: %.2f\n", calculate(num1, num2, operator));

    return 0;
}

//Ques.Write a function calculate that takes three arguments: two numbers and an operator (+, -, *, /). The function should return the result of the operation.

