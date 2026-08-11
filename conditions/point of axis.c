#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point is at the origin.\n");
    }
    else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    }
    else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    }
    else {
        printf("The point lies in a quadrant.\n");
    }

    return 0;
}
