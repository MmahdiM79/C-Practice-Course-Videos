#include <stdio.h>

int main() {
    // Kind of loops: while, do-while, for

    // int n;
    // scanf("%d", &n);

    // int current_num = 1;
    // while (n > 0) {
    //     printf("%d ", current_num);
    //     current_num += 1;
    //     n -= 1;
    // }
    // printf("\n");

    // int input;
    // do {
    //     scanf("%d", &input);
    //     // if (input != -1 && input%7 == 0) {
    //     //     printf("is multiple of 7\n");
    //     // } else if (input != -1 && input%7 != 0) {
    //     //     printf("is not multiple of 7\n");
    //     // }
    //     if (input != -1) {
    //         if (input%7 == 0) {
    //             printf("is multiple of 7\n");
    //         } else {
    //             printf("is not multiple of 7\n");
    //         }
    //     }

    // } while(input != -1);

    // for (int i = 0; i < 20; i += 1)
    // {
    //     printf("%d ", i);
    // }
    // printf("\n");
    // printf("i is %d\n", i);

    // int i = 0;
    // while (i < 20)
    // {
    //     printf("%d ", i);
    //     i += 1;
    // }

    // for (int i = 0, j = 0; i < 20; printf("%d ", i), i += 1);
    // printf("\n");

    // for (int i = 0, j = 0; i < 20; printf("%d ", i++));
    // printf("\n");

    // int c;
    // {
    //     int c = 0;
    // }

    // c


    int i = 0;
    printf("i = %d\n", i++);
    printf("i = %d\n", ++i);

    int j = 5;
    printf("j = %d\n", j--);
    printf("\033[91m j =\033[104m %d\n", --j);

    i = i + 1;
    i += 1;
    i++;
    
    return 0;
}
