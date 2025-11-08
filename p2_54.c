#include <stdio.h>

int main(){
	int x;
	int i,j;

	scanf("%d",&x);

	for(i = x ; i>= 1 ; i--){
		for(j = i ; j >= 1; j--){
			printf("%d",j);
		}
		printf("\n");
	} 




}
