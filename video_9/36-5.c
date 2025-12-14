#include <stdio.h>

void hanoi(int n, int src, int dest, int hold) {
    if (n <= 0)
        return;
    
    if (n == 1) {
        printf("%d -> %d\n", src, dest);
        return;
    }

    hanoi(n-1, src, hold, dest);
    printf("%d -> %d\n", src, dest);
    hanoi(n-1, hold, dest, src);
}

int main() {
    hanoi(3, 1, 3, 2);
    return 0;
}
