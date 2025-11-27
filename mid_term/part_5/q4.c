#include <stdio.h>

int main() {
    float x;
    do
    {
        scanf("%f", &x);
    } while (x <= 0 || x >= 1);


    double s = 0;
    for (int i = 0; i < 20; i++) {
        int sign = i%2 == 0 ? 1 : -1;
        int pow = 2*i + 1;
        int divide_by = 2 * i;
        
        double pow_x = 1;
        while (pow > 0) {
            pow_x *= x;
            pow--;
        }

        long long divide_by_factorial = 1;
        while (divide_by > 0)
        {
            divide_by_factorial *= divide_by;
            divide_by--;
        }

        s += sign * (pow_x / divide_by_factorial);
    }

    printf("%lf\n", s);
}
