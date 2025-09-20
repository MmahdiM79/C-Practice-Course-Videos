#include <stdio.h>

int main() {
    int a, b;

    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b) 
        printf("The greater number is: %d\n", a);


    if (b > a) 
        printf("The greater number is: %d\n", b);

    // if (b > a) 
    //     printf("The greater number is: %d\n", b); printf("Hello World\n");
    //     printf("Hello World2\n");
    

    if (a == b) {
        printf("The numbers are equal\n");
    }

    return 0;
}