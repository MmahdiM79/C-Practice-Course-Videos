#include <stdio.h>

int main() {
    // input 2345783
    // output 8754332

    long n;
    scanf("%ld", &n);

    if (n < 0) {
        printf("Wrong input\n");
        return 1;
    }

    long reverse = 0, temp = n;
    for (int i = 9; i >= 0; i--) {
        temp = n;
        while (temp > 0) {
            if (temp%10 == i) {
                reverse = reverse * 10 + i;
                printf("%d", i);
            }
            temp /= 10;
       }
    }
    puts("");
    printf("%ld\n", reverse);

    // 235 / 10 = 23.5, int 23
    // 23 / 10 = 2.3, int 2
    // 2 / 10 = 0.2, int 0

    // 235 % 10 = 5
    // 23 % 10 = 3

    return 0;
}