#include <stdio.h>
#include <stdbool.h>

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num = 4;
    printf("%d is even: %s\n", num, isEven(num) ? "true" : "false");
    return 0;
}

//Ques. Write a function isEven that takes a number as input and returns true if the number is even, and false otherwise.
