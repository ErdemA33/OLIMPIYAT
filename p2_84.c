#include <stdio.h>

int main(){
	int x,n;
	int basamak = 1 , sayi = 0;
	scanf("%d",&x);

	while(x>0){
		n = x%10;
		x/=10;

		if(n == 3|| n == 7)continue;

		sayi += n*basamak;

		basamak*=10;
	
	
	}

	printf("%d",sayi);
}
