#include <stdio.h>

int main(){
	int x,y;
	int i,j,a,f,g;

	scanf("%d",&x);
	scanf("%d", &y);

	for(i = 1; i<=x; i++){
		for(a = 1; a <= x-i ; a++)printf(" ");
		for(j = 1; j <= 2*i -1; j++)printf("*");
		printf("\n");
	}

	for(f = 1; f<=y; f++){
		for(g = 1; g<= x-1 ; g++){
		printf(" ");
		}
		printf("*");
		printf("\n");
	}

	

}
