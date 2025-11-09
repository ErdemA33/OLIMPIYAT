#include <stdio.h>

int main(){
	int x,i,bolens = 0;

	scanf("%d",&x);

	for(i = 1; i<= x; i++){
		if(x % i == 0) bolens++;
	}
	printf("%d",bolens-1);
}
