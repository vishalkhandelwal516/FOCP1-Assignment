#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("\nOriginal Values: a = %d, b = %d\n", a, b);

    // Using Temporary Variable
    int x = a, y = b;    
    int temp = x;
    x = y;
    y = temp;
    printf("\n1. Using Temporary Variable:\n   a = %d, b = %d\n", x, y);

    //Using Arithmetic Operators
    x = a; y = b;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\n2. Using Arithmetic Operators:\n   a = %d, b = %d\n", x, y);

    // Using Bitwise XOR
    x = a; y = b;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("\n3. Using Bitwise XOR:\n   a = %d, b = %d\n", x, y);

    // Using Pointers (but without void function)
    int *p = &a;
    int *q = &b;

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;

    printf("\n4. Using Pointers:\n   a = %d, b = %d\n", *p, *q);

    return 0;
}
