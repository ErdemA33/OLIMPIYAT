#include <stdio.h>

int main(){
	int x;
	int i,j,b,c,a;

	scanf("%d",&x);

	for(a = 1; a <= x; a++)printf(" ");{
		printf("A");
		printf("\n");
	
	for(a = 2; a <= x; a++)printf(" ");{
        	printf("AAA");
		printf("\n");
	}


	}
	for(i = 2; i <= x-1; i++){
		if (i == x/2){
			for(j = 1; j <= x-i; j++)printf(" ");
			for(a = 1; a <= x+1; a++)printf("A");
                	printf("\n");
			
		}
		else{	
			for(j = 1; j <= x-i; j++)printf(" ");
			printf("A");
			printf("A");
			for(b = 1; b <= i-1; b++ )printf(" ");
			for(c = 1; c <= i-1; c++ )printf(" ");
			printf("A");
			printf("\n");
		}
	}




}
