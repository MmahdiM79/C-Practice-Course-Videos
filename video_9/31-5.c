#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 1: head, 0: tail
int flip() {
    return rand() % 2;
}

int main() {
    srand(time(NULL));
    
    long count_head = 0, count_tail = 0;
    long total_flips = 1000000;
    for (int i = 0; i < total_flips; i++) {
        if (flip()) {
            count_head++;
        } else {
            count_tail++;
        }
    }

    printf("Head: %ld, Tail: %ld\n", count_head, count_tail);
    printf("Head percentage: %f\n", (float)count_head / total_flips * 100);
    printf("Tail percentage: %f\n", (float)count_tail / total_flips * 100);
}
