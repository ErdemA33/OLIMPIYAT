#include <stdio.h>

int main(){
	int i,j;
	int toplam, toplam1 = 0;
	int basamaki,t;
	for(i = 1000; i<= 10000;i++){
		t = i;
		toplam = 0;
		for(j=1; j<=4; j++){
			
			basamaki = (t%10)*(t%10)*(t%10)*(t%10)*(t%10);
			toplam += basamaki;
			t/=10;
		}

		if(toplam == i)toplam1++;
	}

	printf("%d",toplam1);
}
