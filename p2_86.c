#include <stdio.h>

int main(){
	int taban,basamak,rakam,kuvvet,toplam = 0;
	int i,j;

	scanf("%d%d",&taban,&basamak);

	for(i = basamak - 1; i>= 0; i--){
		scanf("%d",&rakam);
		kuvvet = 1;
		
		for(j = 1; j<= i; j++)kuvvet*=taban;
		toplam += rakam * kuvvet;

	}
	printf("%d", toplam);

}
