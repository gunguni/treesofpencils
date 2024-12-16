#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rannum, Guess, baari = 0;

    srand(time(NULL));
    rannum = rand() % 100 + 1;
    printf("---------------------------------------------\n");
    printf("vroooom vrvrrvorooooom\n");

    do {
        printf("---------------------------------------------\n");
        printf("guess:");
        scanf("%d", &Guess);

        baari++;

        if (Guess == rannum) {
            printf("shaaabaaassh apne kr dikhaya in %d baari mein\n", baari);
        } else if (Guess < rannum) {
            printf("thoda zyaadaaaa\n");
        } else {
            printf("thoda kaammmmm\n");
        }
    } while (Guess != rannum);

    return 0;
}
