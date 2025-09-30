#include <stdio.h>

int main() {
    int counter = 0, number = 0, largest = -9999;

    while (counter < 10) {
        scanf("%u", &number);
        if (number > largest) {
            largest = number;
        }

        counter++;
    }
    
    printf("The largest number is %d\n", largest);
    return 0; 
}
