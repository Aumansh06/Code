#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (a != 0 && b != 0) {
        a = a * b;
        b = a / b;
        a = a / b;

        printf("After swap: a = %d, b = %d\n", a, b);
    } else {
        printf("Cannot swap using multiplication/division if one value is zero.\n");
    }
    return 0;
}
