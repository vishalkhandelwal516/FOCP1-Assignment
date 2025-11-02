#include <stdio.h>

int main() {
    int n, i, pos = -1;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the scores:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] == 99) {
            pos = i;
            break; // Stop after first occurrence
        }
    }

    if(pos != -1)
        printf("First occurrence of score 99 is at index: %d\n", pos);
    else
        printf("Score 99 not found in the array.\n");

    return 0;
}

