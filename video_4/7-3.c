#include <stdio.h>

int main() {
    unsigned int x, y;
    scanf("%u %u", &x, &y);
    
    int counter = 0;
    int power = 1;
    while (counter < y) {
        power *= x;
        counter++;
    }
    
    printf("x to power of y: %d\n", power);
    return 0; 
}
