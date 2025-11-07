#include <stdio.h>

int main(){
    int a,i, b, toplam = 0;
    
    scanf("%d%d", &a, &b);
    
    for( i = a; i <= b; i++){
        toplam = toplam + i;
    }
    
    printf("%d", toplam);
    
    return 0;
}

