#include <stdio.h>

int main() {
    int a5digitNumber;
    printf("Enter a 5-digit number: ");
    scanf("%d", &a5digitNumber);

    if (a5digitNumber / 10000 > 10) {
        printf("Invalid input\n");
        return 0;
    }

    int firstDigit = a5digitNumber / 10000;
    printf("%d  ", firstDigit);

    int secondDigit = (a5digitNumber / 1000) % 10;
    printf("%d  ", secondDigit);

    int thirdDigit = (a5digitNumber / 100) % 10;
    printf("%d  ", thirdDigit);

    int fourthDigit = (a5digitNumber / 10) % 10;
    printf("%d  ", fourthDigit);

    int fifthDigit = a5digitNumber % 10;
    printf("%d  \n", fifthDigit);

    return 0;
}