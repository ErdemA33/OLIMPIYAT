#include <stdio.h>

int main(){
        int x,i,bolens = 0;

        scanf("%d",&x);

        for(i = 1; i<= x-1; i++){
                if(x % i == 0) bolens+= i;
        }
        

	if(bolens == x)printf("mükemmel sayı");
	else if(bolens > x)printf("fakir sayı");
	else printf("zengin sayı");
}

