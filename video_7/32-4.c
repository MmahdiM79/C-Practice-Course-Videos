#include <stdio.h>

int main() {
    int number_of_lines;
    while (1) {
        scanf("%d", &number_of_lines);
        if (number_of_lines%2 == 0 || number_of_lines < 1 || number_of_lines > 19) {
            printf("Invalid input\n");
            continue;
        }

        break;
    }
    
    for (int i = 1; i <= number_of_lines; i++) {
        if (i == (number_of_lines/2 + 1)) {
            for (int j = 1; j <= number_of_lines; j++) {
                printf("*");
            }

            printf("\n");
            continue;
        }

        if (i < (number_of_lines/2 + 1)) {
            for (int j = 1; j <= number_of_lines/2 - i + 1; j++) {
                printf(" ");
            }

            for (int k = 1; k <= (2 * i-1); k++) {
                printf("*");
            }

            printf("\n");
            continue;
        }

        if (i > (number_of_lines/2 + 1)) {
            for (int j = 1; j <= number_of_lines/2 - (number_of_lines - i); j++) {
                printf(" ");
            }

            for (int k = (2 * (number_of_lines - i) + 1); k > 0; k--) {
                printf("*");
            }

            printf("\n");
            continue;
        }
    }
    
    return 0;
}