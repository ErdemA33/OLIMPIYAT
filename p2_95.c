#include <stdio.h>

int main(){
	int i,t,toplam,basamak;
	for(i = 0; i <= 999;i++){
		t =i;
		toplam = 0;
		while(t>0){
			basamak = t%10;
			toplam += basamak * basamak* basamak;
			t /= 10;
		}
		if(toplam == i)printf("%d\n",i);
	
	}

}
