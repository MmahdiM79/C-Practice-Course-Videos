#include <stdio.h>


int main() {

    char c;
    scanf("%c", &c);
    
    printf("Next char: %c\n", c+1);
    printf("Lower case of input: %c\n", c+32);

    if (c >= 'A' && c <= 'Z')
        printf("Uppercase letter\n");
    else if (c >= 'a' && c <= 'z')
        printf("Lowercase letter\n");
    else if (c >= '0' && c <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

    return 0;
}
