#include <stdio.h>

int main() {
    int x, y, z;
    int max = 1;

    scanf("%d%d%d", &x, &y, &z);

    for(int i = 2; i <= x && i <= y && i <= z; i++) {
        if(x % i == 0 && y % i == 0 && z % i == 0) {
            max = i;
        }
    }

    printf("%d\n", max);

    return 0;
}

