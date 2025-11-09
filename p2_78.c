#include <stdio.h>

int main(){
	int x,y;
	int kat = 1;
	int i;

	scanf("%d%d",&x,&y);

	printf("%d",x*y);

	for(i = 1; i<=y; i++){
		kat *= 2;
	}

	printf("%d",kat-1);
}
