#include <stdio.h>

int main() {
    int payment_type;
    while (1) {
        printf("Enter payment type (1-4, others to exit): ");
        scanf("%d", &payment_type);
        if (payment_type < 1 || payment_type > 4) {
            break;
        }

        double final_amount = 0.0;
        switch (payment_type) {
            case 1:
                printf("Please enter the number of weeks that you have been working: ");
                int weeks;
                scanf("%d", &weeks);
                if (weeks < 0) {
                    printf("Invalid number of weeks.\n");
                    continue;
                }

                printf("Please enter your weekly wage: ");
                double weekly_wage;
                scanf("%lf", &weekly_wage);
                if (weekly_wage < 0) {
                    printf("Invalid weekly wage.\n");
                    continue;
                }

                final_amount = weeks * weekly_wage;
                break;

            // case 2:
            //     final_amount = amount * 0.95; // 5% discount
            //     break;
            // case 3:
            //     final_amount = amount; // no discount
            //     break;
            default:
                // final_amount = amount; // invalid type, no discount
                break;
        }

        printf("Final Amount: %.2lf\n", final_amount);
    }
    
    return 0;
}