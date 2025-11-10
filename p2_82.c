#include <stdio.h>


int main(){
	int x,a,us,toplam = 0,i,j;
	scanf("%d",&x);

	for(i = x; i>= 1; i--){
		scanf("%d",&a);
		us = 1;

		for(j = i-1; j>= 1; j--){
			us *= 10;
		}

		toplam += us*a;

	}

	printf("%d", toplam*2);
}
