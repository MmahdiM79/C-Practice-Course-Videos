#include <stdio.h>


int main(int n) {
    if (n == 0)
        return 0;
        
    printf("%d", n%10);
    main(n/10);

    return 0;
}
