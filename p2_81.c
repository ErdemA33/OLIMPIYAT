#include <stdio.h>

int main(){
	int x,toplam = 0;
	scanf("%d", &x);

	while(x >0){
		toplam += x%10;
		x/=10;	
	}
	printf("%d",toplam);
}
