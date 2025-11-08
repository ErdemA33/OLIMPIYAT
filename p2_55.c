#include <stdio.h>

int main() {
    int x;
    int i, j, a;

    scanf("%d", &x);

    for(i = 1; i <= x; i++) {
         for(j = 1; j <= x - i; j++) {
            printf(" ");
        }

        for(a = 1; a <= 2 * i - 1; a++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;

}



// TAM ANLAŞILMADI
