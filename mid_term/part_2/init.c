#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;
    printf("count: %d\n", count);

    sum += 9;
    count += 1;

    sum += 10;
    count += 1;

    printf("average: %d\n", sum / count);

    return 0;
}