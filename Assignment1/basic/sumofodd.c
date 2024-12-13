#include <stdio.h>

int main() {
    int terms = 10, sum = 0, odd = 1;
    printf("The odd numbers are: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", odd);
        sum += odd;
        odd += 2;
    }
    printf("\nThe Sum of odd Natural Numbers up to %d terms: %d\n", terms, sum);
    return 0;
}
