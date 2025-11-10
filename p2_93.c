#include <stdio.h>

int main(){
	int i,t,basamak,besler = 0;

	for(i = 1;i<=600; i++){
		t =i;
		
		while(t>0){
			basamak = t%10;
			if(basamak == 5)besler++;
			t/=10;
		}
		

	}
	printf("%d",besler);
}
