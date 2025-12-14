#include <stdio.h>

void print_square(int size, char fill_char) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", fill_char);
        }
        printf("\n");
    }
}

int main() {
    int size; char fill_char;
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    printf("Enter the fill character: ");
    scanf(" %c", &fill_char);

    print_square(size, fill_char);

    return 0;
}
