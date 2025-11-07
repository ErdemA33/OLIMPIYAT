#include <stdio.h>

int main(){
    int n, k, t;
    int toplam = 0;

    scanf("%d %d %d", &n, &k, &t);

    for (int i = 0; i < t; i++){
        toplam += n + i * k;
    }

    printf("%d\n", toplam);

    return 0;
}

