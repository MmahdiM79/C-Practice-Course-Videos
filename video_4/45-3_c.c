#include <stdio.h>

int main() {
    int x = 0;
    scanf("%d", &x);

    float e = 1;

    int precision = 20;
    while (precision > 0)
    {
        float x_n = 1, counter = 0;
        while (counter < precision) {
            x_n *= x;
            counter++;
        }

        int n = precision;
        long factorial = 1;
        while (n > 1) {
            factorial *= n;
            n--;
        }

        e += x_n / factorial;
        precision--;
    }

    printf("e is approximately %.10f\n", e);
    
    return 0; 
}
