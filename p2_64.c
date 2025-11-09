#include <stdio.h>

int main(){
	int x,y;
	double toplam = 0;
	int i,j,k;
	int xkuvvet = 1, ykuvvet = 10;

	scanf("%d%d",&x,&y);

	for(i = 1; i<= 10; i++){
		int xkat=1,ykat=1;
		for(j = 1; j<= xkuvvet; j++)xkat *= x;
		for(k = 1; k<= ykuvvet; k++)ykat *= y;

		toplam += 100.0 / (xkat*ykat);

		xkuvvet++;
		ykuvvet--;
	
	}

	printf("%lf",toplam);

}
