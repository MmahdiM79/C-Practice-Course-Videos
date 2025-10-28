#include <stdio.h>

int main() {
    float n = 1000000.00;
    n += 0.012f;

    printf("n: %.30f\n", n);
    return 0;
}