#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    long factorial = 1;
    while (n > 1) {
        factorial *= n;
        n--;
    }

    printf("Factorial is %ld\n", factorial);
    
    return 0; 
}
