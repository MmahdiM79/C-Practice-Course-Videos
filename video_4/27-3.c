#include <stdio.h>

int main() {
    int input = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &input);

    while (input <= 0) {
        printf("Invalid input. Please enter a positive integer: ");
        scanf("%d", &input);
    }

    printf("You entered: %d\n", input);

    return 0; 
}
