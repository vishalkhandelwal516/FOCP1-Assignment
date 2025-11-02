#include <stdio.h>
int main() {
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("Point (%d, %d) lies in Quadrant 1", x, y);
    } 
    else if (x < 0 && y > 0) {
        printf("Point (%d, %d) lies in Quadrant 2", x, y);
    } 
    else if (x < 0 && y < 0) {
        printf("Point (%d, %d) lies in Quadrant 3", x, y);
    } 
    else if (x > 0 && y < 0) {
        printf("Point (%d, %d) lies in Quadrant 4", x, y);
    } 
    else if (x == 0 && y == 0) {
        printf("Point (%d, %d) is at the Origin", x, y);
    } 
    else if (x == 0) {
        printf("Point (%d, %d) lies on Y-axis", x, y);
    } 
    else {
        printf("Point (%d, %d) lies on X-axis", x, y);
    }

    return 0;
}
