#include <stdio.h>

int main(){
	
	int i,t,x,toplam,j,us;

	for(i = 1; i < 100;i++){
		t=i;
		toplam= 0;
		us=2;
		while(t>0){
			x = t%10;
			toplam+= x;
			t/=10;
		}

		for(j=1;j<=toplam-1;j++){
			us*=2;
		}

		if(us == i)printf("%d",i);
	}

}
