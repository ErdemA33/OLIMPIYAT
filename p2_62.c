#include <stdio.h>

int main(){
    int n, i, j;
    int toplam = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){         
        for(j = 1; j <= i; j++){     
            toplam += j;          
        }
    }

    printf("%d", toplam);

    return 0;
}

