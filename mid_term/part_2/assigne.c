#include <stdio.h>

int main() {
    int a = 5, b = 10;
    
    a /= 2;
    b *= 3;
    
    printf("a = %d, b = %d\n", a, b);

    b %= 2;
    a += b;
    b -= a;
    
    return 0;
}
