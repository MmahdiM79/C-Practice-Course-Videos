#include <stdio.h>
#include <math.h>


double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double a, b;

    printf("Enter the first side of the triangle: ");
    scanf("%lf", &a);

    printf("Enter the second side of the triangle: ");
    scanf("%lf", &b);

    printf("The hypotenuse of the triangle is: %lf\n", hypotenuse(a, b));

    return 0;
}
