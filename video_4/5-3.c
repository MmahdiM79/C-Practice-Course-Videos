#include <stdio.h>

int main() {
    int x = 1;
    int sum = 0;

    while (x < 11) {
        sum += x;
        x++;
    }

    printf("Sum is %d\n", sum);
    return 0; 
}
