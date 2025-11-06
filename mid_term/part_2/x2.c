#include <stdio.h>
#include <math.h>

int main() {
    // int start = -10;
    // int end = 10;

    // for (int y = end*end; y >= 0; y--) {
    //     for (int x = start; x <= end; x++) {
    //         if (y == x*x) {
    //             printf("\033[91m+");
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // printf("\n\n");
    // // for (int y = 0; y <= end*end; y++) {
    // //     for (int x = start; x <= end; x++) {
    // //         printf("(%d,%d)  ", x, y);
    // //     }
    // //     printf("\n");
    // // }

    // for (int y = end*end; y >= 0; y--) {
    //     for (int x = start; x <= end; x++) {
    //         printf("(%d,%d)  ", x, y);
    //     }
    //     printf("\n");
    // }


    // for (double y = 0.0; y != 1; y += 0.1) {
    //     printf("y = %.20f\n", y);
    // }


    long start = -100;
    long end = 100;
    float e = 10;

    for (int y = end*end; y >= 0; y--) {
        for (int x = start; x <= end; x++) {
            if (y/e - sin(x/e) < 0.001 && y/e - sin(x/e) > 0.0001) {
                printf("\033[91m+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}