#include <stdio.h>

int main() {
    // A
    for (int line_number = 1; line_number <= 10; line_number++) {
        for (int star_counter = 1; star_counter <= line_number; star_counter++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // B
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10-i; j++) {
            printf("*");
        }
        // for (int j = 10; j > i; j--) {
        //     printf("*");
        // }
        // for (int j = 10-i; j > 0; j--) {
        //     printf("*");
        // }
        printf("\n");
    }

    printf("\n");

    // C

    for (int i = 1; i <= 10; i++) {
        // spaces 
        for (int j = 0; j < i-1; j++) {
            printf(" ");
        }

        // stars
        for (int k = 0; k < 10-i+1; k++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");

    // D
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (j <= 10-i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}