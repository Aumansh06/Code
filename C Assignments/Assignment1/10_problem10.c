#include <stdio.h>

int main() {
    int rows = 5, value = 1;
    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            printf(" ");
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                value = 1;
            else
                value = value * (i - j + 1) / j;
            printf("%d ", value);
        }
        printf("\n");
    }
    return 0;
}
