#include <stdio.h>

int main(){

	int x;
	int i,j;
	int a,b;

	scanf("%d",&x);

	for(i = 1; i<=x; i++){
		for(j = 1; j <= i; j++) printf("%d",i);
		printf("\n");
	
	}

	for(a = x-1; a >= 1; a--){
		for(b = a; b>= 1; b--)printf("%d",a);
		printf("\n");
	}

	return 0;
}
