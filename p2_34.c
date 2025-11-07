#include <stdio.h>

int main(){
        int i,x,toplam=1;
        scanf("%d",&x);


        for(i=1;i<=x;i++){
                toplam *= i;

        }
        printf("%d",toplam);



}

