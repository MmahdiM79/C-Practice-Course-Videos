#include <stdio.h>

int main() {
    float input_liter = 0, total_liters = 0.0, input_km = 0.0, total_kms = 0.0;

    printf("Enter the liters used (-1 to end): ");
    scanf("%f", &input_liter);
    while (input_liter != -1) {
        printf("Enter the kilometers driven: ");
        scanf("%f", &input_km);

        total_liters += input_liter;
        total_kms += input_km;

        printf("The kilometers/liter for this tank was %f\n", input_km / input_liter);

        printf("Enter the liters used (-1 to end): ");
        scanf("%f", &input_liter);
        
    }

    printf("The overall average kilometers/liter was %f\n", total_kms / total_liters);
    
    return 0; 
}
