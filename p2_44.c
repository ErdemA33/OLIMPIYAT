#include <stdio.h>

int main(){
	int n;
	int i,kilo;
	int zayif = 0,orta = 0,agır = 0;

	scanf("%d",&n);

	for(i = 0; i < n; ++i){
		scanf("%d",&kilo);
		if(kilo < 45)zayif++;
		else if(kilo > 45 && kilo < 70)orta++;
		else agır++;
	}

	printf("%d \n %d \n %d",zayif,orta,agır);

}
