#include <stdio.h>

int main(){
	int a,b,c,d;
	int toplam = 0,i,j;

	scanf("%d%d%d%d",&a,&b,&c,&d);

	for(i = a; i<=b; ++i){
		for(j = c; j<= d; ++j){
			toplam += i+j;
		}
	
	}

	printf("%d",toplam);

}
