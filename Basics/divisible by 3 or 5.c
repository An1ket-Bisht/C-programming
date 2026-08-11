#include <stdio.h>

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if ((x % 3 == 0 || x % 5 == 0) && x % 15 != 0) {
        printf("The number is divisible by 3 or 5 but not 15.\n");
    } else if (x % 15 == 0) {
        printf("The number is divisible by 15.\n");
    } else {
        printf("The number is not divisible by 3 or 5.\n");
    }

    return 0;
}
