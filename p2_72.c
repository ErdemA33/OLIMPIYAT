#include <stdio.h>

int main(){
	int x,y;
	int i,j;
	int ortak,max = ortak;

	scanf("%d%d",&x,&y);

	for(i=1; i<= x; i++){
		for(j=1; j<= y;j++){
			if(x % i == 0 && y % j == 0 && i == j)ortak = i;
			if(ortak > max)max = ortak;

		}
	}
	printf("%d",max);
}
