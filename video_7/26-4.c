#include <stdio.h>

int main() {
    double final_pi_numer = 0.0, sum_others = 0.0;
    for (int i = 1; i <= 1000; i++) {
        sum_others = 0.0;
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                sum_others -= 4.0 / (2 * j + 1);
            } else {
                sum_others += 4.0 / (2 * j + 1);
            }

            // sum_others += (j % 2 == 0) ? (-4.0 / (2 * j + 1)) : (4.0 / (2 * j + 1));
            // sum_others += (j%2 ? -1: 1) * (4.0 / (2 * j + 1));
        }
        
        final_pi_numer = 4 + sum_others;
        if (final_pi_numer - 3.141 < 0.000001) {
            printf("%4d:  %.10lf", i, final_pi_numer);
            printf("\n");
        }
    }
    return 0;
}