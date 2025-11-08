#include <stdio.h>

int main(){
	int x;
	int j,i;

	scanf("%d",&x);

	for(i = 1; i <= x; i++){
		for(j = 1;j<=i;j++)printf("%d",x-i+1);
	printf("\n");

	}

}
