#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n = 11;
    printf("%d is prime: %s\n", n, isPrime(n) ? "true" : "false");
    return 0;
}

//Ques. Write a function isPrime that takes a number as input and returns true if the number is prime, and false otherwise.