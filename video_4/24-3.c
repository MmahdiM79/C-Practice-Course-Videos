#include<stdio.h>

int main() {
    int n = 1;

    printf("n\t10*n\t100*n\t1000*n\n");
    while (n <= 10) {
        printf("%d\t%d\t%d\t%d\n", n, 10*n, 100*n, 1000*n);
        n++;
    }
    
    return 0; 
}