#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0) {
        printf("The second number is a multiple of the first number\n");
        return 0;
    }

    printf("The second number is not a multiple of the first number\n");

    return 0;
}