#include <stdio.h>

int main(){
	int x;
	int j,a,b,i,c,k,d,h,p;

	scanf("%d",&x);

	for(a = 1; a <= x; a++)printf(" ");
	printf("*");
	printf("\n");

	for(i = 1; i <= x; i++){
		for(j = 1; j <= x-i; j++)printf(" ");
		printf("*");
		for(b = 1; b <= i-1; b++ )printf(" ");
		for(c = 1; c <= i; c++ )printf(" ");
		printf("*");
		printf("\n");
	}




    	for(i = x-1; i >= 1; i--) {
        	for(j = 1; j <= x - i; j++)printf(" ");
	        printf("*");
	        for(k = 1; k <= 2*i - 1; k++)printf(" ");
       		printf("*");
        	printf("\n");
    }

	for(a = 1; a <= x; a++)printf(" ");
	printf("*");
	printf("\n");

}

