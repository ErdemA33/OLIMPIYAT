#include <stdio.h>

int main(){
	int x,i,asal = 0;

	scanf("%d",&x);

	for(i = 1; i<=x ; i++){
		if(x%i == 0) asal++;

	}
	if(asal == 2)printf("1");
	else printf("0"); 
}
