#include <stdio.h>

int main() {
    long n_numbers = 0;
    double sum = 0;

    int input;
    while (1) {
        scanf("%d", &input);
        if (input == 9999) {
            break;
        }

        sum += input;
        n_numbers++;
    }

    // Alternative using for loop
    // for (;;) {
    //     scanf("%d", &input);
    //     if (input == 9999) {
    //         break;
    //     }

    //     sum += input;
    //     n_numbers++;
    // }

    // Alternative using do-while loop version 1
    // do {
    //     scanf("%d", &input);
    //     if (input == 9999) {
    //         break;
    //     }

    //     sum += input;
    //     n_numbers++;
    // } while (1);

    // Alternative using do-while loop version 2
    // do {
    //     scanf("%d", &input);
    //     if (input != 9999) {
    //         sum += input;
    //         n_numbers++;
    //     }
    // } while (input != 9999);

    printf("Sum: %.2f\n", sum);
    printf("Count: %ld\n", n_numbers);
    printf("Average: %.2f\n", sum / n_numbers);

    return 0;
}