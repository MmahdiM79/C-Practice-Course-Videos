#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{

    const int n = 2 + 7; // compile time constant
    int a[n] = { 1, 2, 3 }; // ok 

    printf("== %d\n", a[2]);

    bool flag = true;

    return 0;
}