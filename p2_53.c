#include <stdio.h>

int main(){
	int x;
	int i,a;
	int j,b;

	scanf("%d",&x);

	for(i = 1; i <= x ; i++){
		for(a = 1; a <= i ; a++)printf("%d",a);
		printf("\n");
	
	}
	
	for(j = x - 1; j>= 0 ; j--){
		for(b = 1; b <= j; b++ ) printf("%d",b);
		printf("\n");
	
	}
}
