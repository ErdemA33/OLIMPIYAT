#include <stdio.h>

int main(){
	int x;
	int sayac = 0;

	scanf("%d", &x);

	while(x>0){
		x/=10;
		sayac++;
	}

	printf("%d",sayac);
}
