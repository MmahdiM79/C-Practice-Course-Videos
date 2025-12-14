#include <stdio.h>
#include <math.h>

int isPrime(long num) {
    if (num <= 1) {
        return 0;
    }

    for (long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    long max_num_to_check = 9999999999;

    for (long i = 1; i <= max_num_to_check; i++) {
        if (isPrime(i)) {
            printf("%ld is prime\n", i);
        }
    }

    return 0;
}
