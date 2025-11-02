#include <stdio.h>
int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;   
        a = a ^ b;               
        b = borrow << 1;
    }
    return a;

}int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    int result = subtract(x, y);
    printf("Subtraction = %d", result);
    return 0;
}
