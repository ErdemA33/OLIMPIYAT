#include <stdio.h>

int main(){
	int n,m,i,x;
	int toplam = 0,toplam2 = 0;

	scanf("%d%d", &m,&n);

	for(i = m; i<= n; ++i){
		toplam += i;
	}

	for(x = 0; x<= m-1; ++x){
		toplam2 += x;
	}

	printf("%d",toplam - toplam2);


}
