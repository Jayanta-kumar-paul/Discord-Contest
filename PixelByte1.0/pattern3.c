#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Upper part of the pattern
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row + 1; col++) {
            printf("# ");
        }

        for (int col = 0; col < (n - 1) - row; col++) {
            printf("  ");
        }

        for (int col = 0; col < (n - 1) - row; col++) {
            printf("  ");
        }

        for (int col = 0; col < row + 1; col++) {
            printf("# ");
        }

        printf("\n");
    }

    // Lower part of the pattern
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n - row; col++) {
            printf("# ");
        }

        for (int col = 0; col < row; col++) {
            printf("  ");
        }

        for (int col = 0; col < row; col++) {
            printf("  ");
        }

        for (int col = 0; col < n - row; col++) {
            printf("# ");
        }

        printf("\n");
    }

    return 0;
}