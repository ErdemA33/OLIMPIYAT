#include <stdio.h>

int main(){
	int x;
	int i,j,a = 1;

	scanf("%d",&x);

	for(i = 1 ; i<=x ; i++){
		for(j = 1; j <= i; j++){
			printf("%d",a++);
			if (a == 10){
				a = 1;
			}
		}		
		printf("\n");

	}


}
