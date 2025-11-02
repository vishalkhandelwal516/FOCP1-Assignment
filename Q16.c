#include <stdio.h>
int main() {
    int n, i, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100]; 
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter value to insert: ");
    scanf("%d", &value);
    printf("Enter position to insert (0 = front, %d = end, any middle index): ", n);
    scanf("%d", &pos);
    printf("\nArray before insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++; 
    printf("\n\nArray after insertion:");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

