#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);

    if (n < 0) {
        printf("Wrong input\n");
        return 1;
    }


    long temp = n;
    int len_num = 0;
    while (temp > 0) {
        temp /= 10;
        len_num++;
    }

    
    for (int i = 1, k = len_num; i <= len_num; i++, k--) {
        int pow_10 = 1;
        for (int j = i; j > 0; j--) {
            pow_10 *= 10;
        }

        temp = n;
        int number_of_n_nums = k;
        while (temp > 0 && number_of_n_nums > 0) {
            long num = temp % pow_10;
            
            for (int m = 1; m <= num/2; m++) {
                if (m * m == num) {
                    printf("%ld\n", num);
                    break;
                }
            }

            temp /= 10;
            number_of_n_nums--;
        }
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int x, digit = 0, d1 = 1;
//     scanf("%d", &x);
//     for (int i = x; i != 0; i /= 10)
//     {
//         digit++;
//         d1 *= 10;
//     }
//     for (int i = 1; i <= digit; i++)
//     {
//         int check = x;
//         int d2 = 1;
//         for (int j = 0; j < i; j++)
//         {
//             int check2 = check / d2 % d1;
//             for (int k = check / 2; k >= 0; k--)
//             {
//                 if (k * k == check2)
//                     printf("%d ", check2);
//             }
//             d2 *= 10;
//         }
//         d1 /= 10;
//     }
//     return 0;
// }