#include <stdio.h>


// 4! = 4 * 3 * 2 * 1
// 3! = 3 * 2 * 1

// 4! = 4 * 3!
// 3! = 3 * 2!
// 2! = 2 * 1!

long long factorial(int n) {
    if (n <= 1)
        return 1;

    if (n == 2) 
        return 2;

    return n * factorial(n-1);
}

// 1, 1, 2, 3, 5, 8, 13, 21
long long fibo(int n) {
    if (n <= 2)
        return 1;

    return fibo(n-1) + fibo(n-2);
}

int main() {
    printf("factorial 5: %lld\n", factorial(5));
    // printf("fibo 100: %lld\n", fibo(100));

    long long n1 = 1, n2 = 1;
    for (int i = 1; i <= 50; i++) {
        int temp = n2;
        n2 = n2 + n1;
        n1 = temp;
    }
    printf("n2: %lld\n", n2);


    return 0;
}

