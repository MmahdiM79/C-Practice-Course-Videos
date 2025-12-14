#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    long max_num_to_check = 10000000;

    for (long i = 1; i <= max_num_to_check; i++) {
        if (isPerfect(i)) {
            for (int j = 1; j < i; j++) {
                if (i%j == 0) {
                    printf("%d + ", j);
                }
            }

            printf("\b\b\b = %ld\n", i);
        }
    }

    return 0;
}
