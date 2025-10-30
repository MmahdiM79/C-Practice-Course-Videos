#include <stdio.h>
#include <stdbool.h>

int main() {
    // unsigned int ui;
    // short int si;
    // long s;
    // long long ll;
    // int a;

    // float b;
    // double c;

    // int a = 5, b = 2;

    // printf("%d\n", a + b);
    // printf("%d\n", a - b);
    // printf("%d\n", a * b);
    // printf("%d\n", a / b);
    // printf("%d\n", a % b);

    // short int si = 1e20;
    // printf("\n->>> %d\n", si);

   
    printf("size of int: %lu\n", sizeof(int));
    printf("size of short int: %lu\n", sizeof(short int));
    printf("size of long: %lu\n", sizeof(long));
    printf("size of long long: %lu\n", sizeof(long long));
    printf("size of float: %lu\n", sizeof(float));
    printf("size of double: %lu\n", sizeof(double));

    int s;
    size_t s = sizeof(char);

    return 0;
}

