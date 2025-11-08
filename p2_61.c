#include <stdio.h>

int main() {
    int x;
    int i, j, k;
    scanf("%d", &x);

    // Üst satır
    for (j = 1; j <= x; j++) printf(" ");
    for (i = 1; i <= x; i++) printf("* ");
    printf("\n");

    // Üst üçgen
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= x - i; j++) printf(" ");
        printf("*");
        for (k = 1; k <= 2 * (x + i - 1); k++) printf(" ");
        printf("*\n");
    }

    // Orta dikey blok
    for (j = 1; j <= x; j++) {
        printf("*");
        for (k = 1; k <= 4 * x - 5; k++) printf(" ");
        printf("*\n");
    }

    // Alt üçgen
    for (i = x; i >= 1; i--) {
        for (j = 1; j <= x - i; j++) printf(" ");
        printf("*");
        for (k = 1; k <= 2 * (x + i - 1); k++) printf(" ");
        printf("*\n");
    }

    // Alt satır
    for (j = 1; j <= x; j++) printf(" ");
    for (i = 1; i <= x; i++) printf("* ");
    printf("\n");

    return 0;
}

