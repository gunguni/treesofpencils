#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int num = 1234;
    printf("Reversed number of %d is: %d\n", num, reverseNumber(num));
    return 0;
}

//Ques. Write a function reverseNumber that takes a number and returns it reversed.

