#include <stdio.h>

int main() {
    int x = 2, y = 6, s = 3, z = 4;
    if (z = !(x < y)) if(x > y) s = s+1; else if (x < y) if (y < s) s = s+2;
    else s = s - 3; else s = s - 4;

    printf(" %d %d \n", s, z);

    // !=
    if (z = !(x < y)) {
        if(x > y) {
            s = s+1;
        }
        else if (x < y) {
            if (y < s) {
                s = s+2;
            }
            else { 
                s = s - 3;
            }  
        }
        else { 
            s = s - 4; 
        }
    }

    printf(" %d %d \n", s, z);

    return 0;
}