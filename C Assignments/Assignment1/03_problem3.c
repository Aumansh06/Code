#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    while (b != 0) {
        int temp = (~a) & b;
        a = a ^ b;
        b = temp << 1;
    }
    printf("Result of subtraction = %d\n", a);
    return 0;
}
