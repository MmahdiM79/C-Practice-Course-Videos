#include <stdio.h>

typedef enum {
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
} WeekDays;

int main() {
    // int num;
    // scanf("%d", &num);

    // switch (num%2) {
    // case 5:
    // case 6:
    //     printf("mamamd2\n");
    //     break;
    // case 2:
    //     printf("mamad\n");
    //     break;
    // default:
    //     printf("invalid input\n");
    //     break;
    // }

    WeekDays day = FRIDAY;

    switch (day) {
        case SATURDAY:
        case SUNDAY:
        case MONDAY:
        case TUESDAY:
        case WEDNESDAY:
            printf("Weekdays\n");
            break;
        case THURSDAY:
        case FRIDAY:
            printf("Weekends\n");
            break;
    }

    return 0;
}
