#include <stdio.h>
int main() {
    int n, a = 0, b = 1, temp;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", a, b);

    for(int i = 3; i <= n; i++) {
        temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }

    return 0;
}

