#include <stdio.h>

int main(){
	int n,toplam = 0,max,min;
	int i,x;

	
	scanf("%d", &n);
	scanf("%d", &x);

	max = x;
	min = x;

	toplam += x;

	for(i = 2; i<= n; i++){
		scanf("%d", &x);
		toplam += x;

		if(x>max)max = x;
		if(x<min)min = x;


	}
	printf("%d\n", toplam/n);
	printf("%d\n", max);
	printf("%d\n", min);
}


