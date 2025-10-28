#include <stdio.h>

int main() {
    int n_numbers;
    scanf("%d", &n_numbers);

    long long sum = 0;

    int input;
    for (int i = 1; i <= n_numbers; i++) {
        scanf("%d", &input);
        sum += input;
    }

    // Alternative using while loop
    // int i = 1;
    // while (i <= n_numbers)
    // {
    //     scanf("%d", &input);
    //     sum += input;

    //     i++;
    // }

    printf("Sum: %lld\n", sum);
    return 0;
}