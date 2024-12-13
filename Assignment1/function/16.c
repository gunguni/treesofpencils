#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1 = 24, n2 = 18;
    printf("gcd of %d and %d is: %d\n", n1, n2, gcd(n1, n2));
    return 0;
}

//Ques. Write a function gcd that takes two numbers and returns their greatest common divisor.