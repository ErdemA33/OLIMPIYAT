#include <stdio.h>

int main(){
        int i;
	double toplam = 0;

        for(i=1;i<=2000000;i++){
                toplam += 1.0/i;

        }
        printf("%f",toplam);



}

