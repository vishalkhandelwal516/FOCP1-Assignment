#include <stdio.h>

int main() {
    int n, i, j, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], visited[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    printf("\nDuplicate elements: ");

    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }

        if(count > 1) {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }

    if(flag == 0) {
        printf("-1");
    }

    printf("\n");
    return 0;
}
