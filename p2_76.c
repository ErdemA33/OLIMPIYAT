#include <stdio.h>

int main(){
	int a = 1,t = 1,b = 1,x;
	int i;

	scanf("%d",&x);

	for(i = 1 ; i<= x - 2; i++){
		b = b + a;
		a = t;
		t = b;

	
	}
	printf("%d",b);
}
