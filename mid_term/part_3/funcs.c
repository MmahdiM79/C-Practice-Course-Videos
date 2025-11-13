#include <stdio.h>

long long square(int x);


int main()
{
    float x = 5.5;
    // printf("address of x: %p\n", (void*)&x);

    printf("%lld\n", square(32767));
    return 0;
}

long long square(int x) {
    // printf("address of x: %p\n", (void*)&x);
    long long s = x * x;
    return s;
}

// int: 4bit
//  5 -> 0101
// -5 -> 1101
// max positive int: 0111
// max negative int: 1111

// int x = 20;
// 20 -> 00011100
// x = 1100
// x = -4
