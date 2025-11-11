#include <stdio.h>

int main(){
	int x;
	int i,j;
	scanf("%d",&x);

	for(i = 1; i <= x; i++){
		for(j = 1;  j<= x; j++){
			if(j*j + i*i == x){
				printf("%d %d\n",i,j);
			}
			else printf("0");
		}
	}

}
