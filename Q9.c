#include <stdio.h>
int main() {
    int n, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of students:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99 are at index positions: ");

    for(i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("%d ", i);  // print index of student who got 99
            count++;
        }
    }

    if(count == 0)
        printf("None");

    printf("\nTotal students who scored 99: %d\n", count);

    return 0;
}
