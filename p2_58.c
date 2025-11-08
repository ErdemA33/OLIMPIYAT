#include <stdio.h>
int main(){


	int x;
	int j,k,i,a,b;

	scanf("%d",&x);

	for(b = 1; b<=x;b++)printf(" ");
		printf("1");
		printf("\n");

	for(i = 1; i<= x-1; i++){
		for(j = 1; j <= x-i; j++)printf(" ");
		for(k = 1; k<=i; k++)printf("%d",k);
		for(a = k; a>=1; a--)printf("%d",a);
		printf("\n");
	}
	for(i = x-2; i >=1; i--){
		for(j = 1; j <= x-i; j++)printf(" ");
                for(k = 1; k<=i; k++)printf("%d",k);
                for(a = k; a>=1; a--)printf("%d",a);
                printf("\n");
	
	}
	
        for(b = 1; b<=x;b++)printf(" ");
                printf("1");
                printf("\n");

}
