#include <stdio.h>

// SOLUTION 1 -> with D&D given syntax
// int main() {
//     int n = 8;

//     int line_counter = 0, char_counter = 0;

//     while (line_counter < n) {
//         char_counter = 0;
//         if (line_counter%2 != 0) {
//             printf(" ");
//         }

//         while (char_counter < n) {
//             printf("* ");
//             char_counter++;
//         }

//         puts("");
//         line_counter++;
//     }

//     return 0;
// }


// SOLUTION 2
int main() {
    int n = 15;

    int line_counter = 0, char_counter = 0;

    while (line_counter < n) {
        char_counter = 0;

        while (char_counter < 2*n) {
            if (line_counter%2 == char_counter%2) {
                printf("*");
            } else {
                printf(" ");
            }
            char_counter++;
        }

        puts("");
        line_counter++;
    }

    return 0;
}
