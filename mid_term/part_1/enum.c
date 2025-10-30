#include <stdio.h>

typedef enum Colors {
    RED,
    GREEN,
    BLUE
} Colors;

typedef enum Weekdays {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Weekdays;

int main() {
    char m = 'm';
    printf("int m: %d\n", m);

    printf("Color RED: %d\n", RED);

    printf("Day MONDAY: %d\n", MONDAY);

    Colors c = BLUE;

    Weekdays w = FRIDAY;

    // 5 means Friday
    int ww = 5;

    return 0;
}

