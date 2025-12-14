#include <stdio.h>

float calculateCharges(float hours);

int main() {
    int num_customers = 3;
    float c1_hours, c2_hours, c3_hours;

    printf("Enter hours parked for customer 1: ");
    scanf("%f", &c1_hours);
    printf("Enter hours parked for customer 2: ");
    scanf("%f", &c2_hours);
    printf("Enter hours parked for customer 3: ");
    scanf("%f", &c3_hours);

    float c1_charge = calculateCharges(c1_hours);
    float c2_charge = calculateCharges(c2_hours);
    float c3_charge = calculateCharges(c3_hours);

    printf("Car\tHours\tCharge\n");
    printf("1  \t%4.2f\t%6.2f\n", c1_hours, c1_charge);
    printf("2  \t%4.2f\t%6.2f\n", c2_hours, c2_charge);
    printf("3  \t%4.2f\t%6.2f\n", c3_hours, c3_charge);
    printf("Total\t%4.2f\t%6.2f\n", c1_hours + c2_hours + c3_hours, c1_charge + c2_charge + c3_charge);

    return 0;
}

float calculateCharges(float hours) {
    if (hours <= 3) {
        return 2;
    }

    float charge = 2 + (hours - 3) * 0.5;
    if (charge > 10) {
        return 10;
    }

    return charge;
}


