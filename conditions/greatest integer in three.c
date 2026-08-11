#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z) {
        printf("%d is the greatest.\n", x);
    }
    else if (y >= x && y >= z) {
        printf("%d is the greatest.\n", y);
    }
    else {
        printf("%d is the greatest.\n", z);
    }

    return 0;
}
