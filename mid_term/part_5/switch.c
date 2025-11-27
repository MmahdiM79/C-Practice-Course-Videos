#include <stdio.h>

int main() {
    int num = 1;

    switch (num)
    {
    case 1:
        printf("One\n");
    case 2:
        printf("Two\n");
    case 6:
        printf("six\n");
        break;
    default:
        break;
    }


    return 0;
}