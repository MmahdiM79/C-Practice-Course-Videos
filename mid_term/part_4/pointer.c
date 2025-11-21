#include<stdio.h>


int sum(int *a, int *b) {
    printf("[func sum] Addr of a: %p\n", &a);
    printf("[func sum] Addr of b: %p\n", &b);
    printf("[func sum] Value of a: %p\n", a);
    printf("[func sum] Value of b: %p\n", b);

    *a = 22;

    return *a + *b;
}

int sum2(int a, int b) {
    return a + b;
}

int main() {

    // int a;
    // printf("Enter a number: ");
    // scanf("%d", &a);
    // printf("You entered: %d\n", a);


    // int b;
    // printf("\n\nAddress of b: %p\n", &b);
    // printf("Value of b: %d\n", b);

    // int *ptr = NULL;
    // printf("Address of ptr: %p\n", &ptr);
    // printf("Value of ptr: %p\n", ptr);

    // *ptr = 10;
    // printf("*ptr = %d\n", *ptr);

    // int *ptr2 = &b;
    // printf("Value of pt2r: %p\n", ptr2);

    // *ptr2 = 22;
    // printf("Value of b: %d\n", b);
    // printf("*ptr2 = %d\n", *ptr2);

    
    // int b = 10;
    // void *ptr3 = &b;
    // float f = 20.5;
    // void *ptr4 = &f;

    // printf("Address of ptr3: %p\n", ptr3);
    // printf("Address of ptr4: %p\n", ptr4);
    
    // *(int *)ptr3 = 30;
    // *(float *)ptr4 = 40.5;
    
    // printf("Value of ptr3: %d\n", *(int *)ptr3);
    // printf("Value of ptr4: %f\n", *(float *)ptr4);


    // int a = 5, b = 8;
    // printf("[main] Addr of a: %d\n", &a);
    // printf("[main] Addr of b: %p\n", &b);
    // printf("[main] Addr of a+1: %p\n", &a+1);
    // printf("[main] Addr of a-1: %p\n", &a-1);


    // printf("[main] Sum: %d\n", sum(&a, &b));
    
    // printf("[main] Value of a: %d\n", a);
    // printf("[main] Value of b: %d\n", b);

    
    // int arr[5] = {1, 2, 3, 4, 5};
    // printf("Address of arr: %p\n", arr);
    // printf("Address of arr+4: %p\n", arr+4);
    // printf("diff arr, arr+4: %d\n", arr+4 - arr + 1);


    // int (* f)(int, int) = sum2;
    // printf("Address of f: %p\n", &f);
    // printf("Value of f: %p\n", f);
    // printf("Value of f(): %d\n", f(0, 10));


    return 0;
}