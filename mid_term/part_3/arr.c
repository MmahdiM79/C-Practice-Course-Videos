#include <stdio.h>

int main() {
    const int n = 3;

    int arr[n] = {1, 2, 3};
    // int arr[] = {1, 2, 3};

    printf("%d\n", arr[1]);
    printf("%d\n\n", 2[arr]);
    printf("------ %d\n", *(arr + 1));

    for (int i = 0; i < n; i++) {
        printf("%d\n", i[arr]);
    }

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    printf("^^^ %d\n", *(matrix[1] + 1));

    for (int i; i < 3; i++)
        for (int j = 0; j < 3; j++)
            // printf("- %d\n", matrix[i][j]);
            printf("-> %d\n", i[j[matrix]]);

    return 0;
}