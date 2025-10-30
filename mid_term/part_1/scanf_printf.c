#include <stdio.h>

int main() {
    
    int a = 10;
    scanf("%d", &a);
    printf("Integer: %d\n", a);

    float b = 5.5;
    scanf("%f", &b);
    printf("Float: %f\n", b);

    char c = 'A';
    scanf(" %c", &c);
    printf("Character: %c\n", c);

    long d = 100000L;
    scanf("%ld", &d);
    printf("Long: %ld\n", d);

    long long e = 10000000000LL;
    scanf("%lld", &e);
    printf("Long Long: %lld\n", e);

    double f = 3.14159;
    scanf("%lf", &f);
    printf("Double: %lf\n", f);

    unsigned int g = 20U;
    scanf("%u", &g);
    printf("Unsigned Integer: %u\n", g);


    float h = 2.71828f;
    scanf("%f", &h);
    printf("Float (scientific): %.2f\n", h);

    int i = -15;
    printf("Int with spaces: |%10d|\n", i);

    int j = -15;
    printf("Int with spaces2: |%-10d|\n", i);

     float hh = 2.71828f;
    printf("Int with spaces: |%20.3f|\n", hh);

    printf("1\n2\t3");
    printf("1\r2\n3");

    return 0;
}
