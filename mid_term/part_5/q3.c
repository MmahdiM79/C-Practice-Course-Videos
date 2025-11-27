#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice() {
    return rand() % 6 + 1;
}

int main() {
    // srand(0);
    // for (int i = 0; i < 10; i++) {
    //     srand(time(NULL));
    //     int n = rand() % 1000000000;
    //     printf("%d\n", n);
    // }

    srand(time(NULL));
        
    int score_a = 0, score_b = 0, dice;
    // while (score_a < 100 && score_b < 100) {
    while (!(score_a >= 100 || score_b >= 100)) {
        do { 
            dice = roll_dice();
            score_a += dice;
            printf("Player A rolled %d, score: %d\n", dice, score_a);
        } while (dice != 6 && score_a < 100);

        do
        {
            dice = roll_dice();
            score_b += dice;
            printf("Player B rolled %d, score: %d\n", dice, score_b);
        } while (dice != 6 && score_b < 100);
    }

    if (score_a > score_b) {
        printf("Player A wins!\n");
    } else if (score_b > score_a) {
        printf("Player B wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    printf("\n\nPlayer A's score: %d\n", score_a);
    printf("Player B's score: %d\n", score_b);

    return 0;
}
