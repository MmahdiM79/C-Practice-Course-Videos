#include <stdio.h>

int main() {
    float principal = 0, rate = 0, days = 0;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);
    while (principal != -1) {
        printf("Enter interest rate: ");
        scanf("%f", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%f", &days);

        float interest = principal * rate * days / 365;
        printf("The interest charge is $%.2f\n", interest);

        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
    }
    
    return 0; 
}
