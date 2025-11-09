#include <stdio.h>

int main(){
	int x;
	double toplam = 0;
	int i,j,a;

	scanf("%d",&x);

	for(i = 1; i<= 9;i++){
		double kuvvet = 1;
		double faktor = 1;

		for(j = 1; j<=i; j++)kuvvet*=x;
		for(a = 1; a<=i; a++)faktor *= a;
		toplam = toplam + kuvvet/faktor;
	
	
	}
	printf("%lf",toplam);

}
