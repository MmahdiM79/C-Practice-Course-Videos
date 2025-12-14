#include <stdio.h>
#include <math.h>

float roundToInteger(float);
float roundToTenths(float);
float roundToHundredths(float);
float roundToThousandths(float);

float round_with_precision(float, int);

int main() {
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);

    printf("Rounded to integer: %f\n", roundToInteger(number));
    printf("Rounded to tenths: %f\n", roundToTenths(number));
    printf("Rounded to hundredths: %f\n", roundToHundredths(number));
    printf("Rounded to thousandths: %f\n", roundToThousandths(number));

    printf("\n ------- \n");

    printf("Rounded to integer: %f\n", round_with_precision(number, 0));
    printf("Rounded to tenths: %f\n", round_with_precision(number, 1));
    printf("Rounded to hundredths: %f\n", round_with_precision(number, 2));
    printf("Rounded to thousandths: %f\n", round_with_precision(number, 3));

    return 0;
}

float round_with_precision(float number, int precision) {
    return floor(number * pow(10, precision) + .5) / pow(10, precision);
}

float roundToInteger(float number) {
    return floor(number + .5);
}

float roundToTenths(float number) {
    return floor(number * 10 + .5) / 10;
}

float roundToHundredths(float number) {
    return floor(number * 100 + .5) / 100;
}

float roundToThousandths(float number) {
    return floor(number * 1000 + .5) / 1000;
}
