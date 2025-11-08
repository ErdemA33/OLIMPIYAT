#include <stdio.h>

int main(){

	int x;
	int i,j;

	scanf("%d",&x);

	for(i=1;i<=x;i++){
		for(j = i; j>0 ;j--)printf("%d",j);
		printf("\n");
	}


}
