#include <stdio.h>

int main() {
    
    int x = 2;
    printf("x is %d\n", x--);
    printf("x is %d\n", x);

    int y = 2;
    printf("\ny is %d\n", --y);
    printf("y is %d\n", y);

    return 0; 
}
