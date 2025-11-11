#include <stdio.h>

int main(){
	int n;
	int t,i;
	int basamak,basamak1;
	int kontrol;
	int kosulson = 1;

	scanf("%d",&n);
	n = n+1;
	for(i=1;i<=n;i++)kosulson*=10;

	for(i = 1; i<= kosulson -1; i++){
		t  = i;
		kontrol = 0;
		while(t>0){
			basamak = t%10;
			t /= 10;
			basamak1 = t%10;

			if(basamak > basamak1)kontrol++;
			else break;
		}

		if(kontrol == n-1)printf("%d\n",i);
	}
}
