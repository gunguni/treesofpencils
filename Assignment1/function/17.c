#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 7;
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    return 0;
}

//Ques. Write a function fibonacci that takes a number n and returns the nth Fibonacci number.

