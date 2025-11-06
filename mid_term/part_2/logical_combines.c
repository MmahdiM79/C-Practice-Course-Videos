#include <stdio.h> 

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // if (a*a + b*b == c*c) {
    //     printf("Right angled triangle\n");
    // }

    // if (a*a + c*c == b*b) {
    //     printf("Right angled triangle\n");
    // }

    // if (b*b + c*c == a*a) {
    //     printf("Right angled triangle\n");
    // }

    // if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
    //     printf("Right angled triangle\n");
    // } else {
    //     printf("Not a right angled triangle\n");
    // }

    // if ((a*a + b*b != c*c) && !(a*a + c*c == b*b) && !(b*b + c*c == a*a)) {
    //     printf("Not a right angled triangle\n");
    // } else {
    //     printf("Right angled triangle\n");
    // }

    // if (a*a + b*b == c*c || printf("mamad\n") || b*b + c*c == a*a) {
    //     printf("Right angled triangle\n");
    // } else {
    //     printf("Not a right angled triangle\n");
    // }

    // if (a == b && printf("hello if\n")) {
    //     printf("Equilateral triangle\n");
    // } else {
    //     printf("Not an equilateral triangle\n");
    // }

    // int n1 = 10, n2 = 0;
    // if (n2 != 0 && n1/n2 == 2) {
    //     printf("n1 is twice n2\n");
    // }

    // XOR A, B
    // A B XOR(A, B)
    // 0 0 0
    // 0 1 1
    // 1 0 1
    // 1 1 0

    int f1 = 0, f2 = 1;
    
    // if (!(f1 && f2) || (!f1 && !f2)) {
    //     printf("XOR is 1\n");
    // } else {
    //     printf("XOR is 0\n");
    // }

    if (f1 && !f2 || !f1 && f2) {
        printf("XOR is 1\n");
    } else {
        printf("XOR is 0\n");
    }


    return 0;
}
