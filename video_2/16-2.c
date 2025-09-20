#include <stdio.h>

int main() {
    int a, b;

    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf("sum: %d\n", sum);
    printf("sub: %d\n", sub);
    printf("mul: %d\n", mul);
    printf("div: %d\n", div);
    printf("mod: %d\n", mod);
    
    return 0;
}