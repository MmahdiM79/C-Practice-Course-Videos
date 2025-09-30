#include <stdio.h>

int main() {
    float e = 1;

    int precision = 10;
    while (precision > 0)
    {
        int n = precision;
        long factorial = 1;
        while (n > 1) {
            factorial *= n;
            n--;
        }

        e += 1.0 / factorial;
        precision--;
    }

    printf("e is approximately %.10f\n", e);
    
    return 0; 
}
