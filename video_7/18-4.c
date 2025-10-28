#include <stdio.h>

int main() {
    int total_numbers = 5;
    int num_1, num_2, num_3, num_4, num_5;

    int input;
    while (total_numbers > 0) {
        scanf("%d", &input);
        if (input > 30 || input < 1) {
            printf("Invalid input\n");
            continue;
        }

        switch (total_numbers)
        {
        case 5:
            num_1 = input;
            break;
        case 4:
            num_2 = input;
            break;
        case 3:
            num_3 = input;
            break;
        case 2:
            num_4 = input;
            break;
        case 1:
            num_5 = input;
            break;
        default:
            break;
        }

        total_numbers--;
    }

    do {
        printf("*");
        num_1--;
    } while (num_1 > 0);
    printf("\n");

    do {
        printf("*");
        num_2--;
    } while (num_2 > 0);
    printf("\n");

    do {
        printf("*");
        num_3--;
    } while (num_3 > 0);
    printf("\n");

    do {
        printf("*");
        num_4--;
    } while (num_4 > 0);
    printf("\n");

    do {
        printf("*");
        num_5--;
    } while (num_5 > 0);
    printf("\n");

    return 0;
}