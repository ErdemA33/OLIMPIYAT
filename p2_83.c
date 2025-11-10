#include <stdio.h>


int main(){
        int x,a,us,toplam = 0,i,j;
        scanf("%d",&x);

        for(i = 1; i<=x ; i++){
                scanf("%d",&a);
                us = 1;

                for(j = 1; j<=i-1; j++){
                        us *= 10;
                }

                toplam += us*a;

        }

        printf("%d", toplam*2);
} 
