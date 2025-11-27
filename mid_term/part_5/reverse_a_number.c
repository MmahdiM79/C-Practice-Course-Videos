#include <stdio.h>

void ans1(long);
void ans2(long);
void ans3(long);

int main() {
    long n;
    do {
        scanf("%ld", &n);
    } while (n <= 0);

    ans1(n);
    ans2(n);
    ans3(n);

    return 0;
}

void print_reverse(long n) {
    printf("%ld", n%10);

    if (n/10 != 0)
        print_reverse(n/10);
}

void ans1(long n) {
    print_reverse(n);
    puts("");
}

void ans2(long n) {
    long reverse_num = 0;

    while (n != 0) {
        reverse_num = reverse_num * 10 + n % 10;
        n /= 10;
    }
    
    printf("%ld\n", reverse_num);
}

long helper(long n, long rev){
    if(n==0)
        return rev;

    return helper(n/10, rev*10 +n%10);
}

void ans3(long n){
    printf("%ld\n", helper(n, 0));
}
