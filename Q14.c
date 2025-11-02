#include <stdio.h>

int main() {
    int n, i, j, count = 0, isPrime;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n; i++) {
        if(arr[i] < 2)
            continue;  
        
        isPrime = 1;

        for(j = 2; j * j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            count++;
        }
    }

    printf("\nTotal Prime Numbers in array = %d\n", count);

    return 0;
}
