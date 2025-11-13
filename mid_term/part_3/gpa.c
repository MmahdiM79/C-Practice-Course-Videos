#include <stdio.h>

int main() {
    // gpa 20-16: 4, 15-12: 3, 11-8: 2, 7-4: 1, 3-0: 0

    float avg;
    scanf("%f", &avg);

    int avg_int = avg;

    // switch (avg_int)
    // {
    // case 20:
    // case 19:
    // case 18:
    // case 17:
    // case 16:
    //     printf("4");
    //     break;
    // case 15:
    // case 14:
    // case 13:
    // case 12:
    //     printf("3");
    //     break;
    // case 11:
    // case 10:
    // case 9:
    // case 8:
    //     printf("2");
    //     break;
    // case 7:
    // case 6:
    // case 5:
    // case 4:
    //     printf("1");
    //     break;
    // default:
    //     printf("0");
    //     break;
    // }

    avg_int = avg_int / 4;
    switch (avg_int)
    {
    case 5:
    case 4:
        printf("4");
        break;
    case 3:
        printf("3");
        break;
    case 2:
        printf("2");
        break;
    case 1:
        printf("1");
        break;
    default:
        printf("0");
        break;
    }

    return 0;
}
