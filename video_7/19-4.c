#include <stdio.h>

int main() {
    double sum_sales = 0.0;

    int product_code, quantity_sold;
    while (1) {
        scanf("%d %d", &product_code, &quantity_sold);
        if (product_code == 0 && quantity_sold == 0) {
            break;
        }

        double sum_sold = 0.0;
        switch (product_code) {
            case 1: sum_sold = 2.98 * quantity_sold; break;
            case 2: sum_sold = 4.50 * quantity_sold; break;
            case 3: sum_sold = 9.98 * quantity_sold; break;
            case 4: sum_sold = 4.49 * quantity_sold; break;
            case 5: sum_sold = 6.87 * quantity_sold; break;

            default: sum_sold = 0.0; break;
        }

        sum_sales += sum_sold;
    }

    printf("Total Sales: %.2lf\n", sum_sales);
    return 0;
}