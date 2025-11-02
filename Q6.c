#include <stdio.h>
int main() {
    int choice;
    long long binary;  
    int decimal;

    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%lld", &binary);

        int base = 1, rem;
        decimal = 0;
        while(binary > 0) {
            rem = binary % 10;
            decimal = decimal + rem * base;
            base = base * 2;
            binary = binary / 10;
        }
        printf("Decimal value = %d", decimal);
    }
    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        int temp = decimal;
        int i = 0;
        int arr[32];

        while (temp > 0) {
            arr[i] = temp % 2;
            temp = temp / 2;
            i++;
        }

        printf("Binary value = ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", arr[j]);
        }
    }
    else {
        printf("Invalid choice!");
    }

    return 0;
}
