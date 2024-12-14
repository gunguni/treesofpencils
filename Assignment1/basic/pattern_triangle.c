#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) { //rows
        for (int j = 1; j <= i; j++) { //cols
            printf("*");
        }
        printf("\n"); // for changing position after iteration ' i mean line '.
    }
    return 0;
}
