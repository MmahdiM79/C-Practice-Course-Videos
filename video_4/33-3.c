#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int line_counter = 0, star_counter = 0;
    while (line_counter < n) {
        star_counter = 0;

        if (line_counter == 0 || line_counter == n - 1) {
            while (star_counter < n) {
                printf("* ");
                star_counter++;
            }
        } else {
            while (star_counter < n) {
                if (star_counter == 0 || star_counter == n - 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
                star_counter++;
            }
        }
        
        printf("\n");
        line_counter++;
    }
    
    return 0; 
}
