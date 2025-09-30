#include <stdio.h>

int main() {
    int n = 0;
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

    while (n < 10000 || n > 99999) {
        printf("Invalid input. Please enter a 5-digit number: ");
        scanf("%d", &n);
    }

    int reversed = 0, n_copy = n;
    while (n_copy != 0) {
        int digit = n_copy % 10;
        reversed = reversed * 10 + digit;
        n_copy /= 10;
    }
    
    if (n == reversed) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    
    return 0; 
}