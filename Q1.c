#include <stdio.h>
#include <math.h> 
int count_digits(int n) {
    if (n == 0) return 1;
    int count = 0;
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    return count;
}
int isArmstrong(int num) {
    if (num < 0) {
        return 0;
    }
    if (num == 0) {
        return 1;
    }

    int originalNum = num;
    int n = count_digits(num); 
    double sum_of_powers = 0.0;
    int remainder;
    
    int tempNum = num;
    while (tempNum != 0) {
        remainder = tempNum % 10;
        
        sum_of_powers += pow(remainder, n); 
        
        tempNum= tempNum/ 10;
    }

    if ((int)round(sum_of_powers) == originalNum) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
