#include <stdio.h>

int main(){
	int i,t,j;
	int sayac;
	int tc;
	int tek,cift;
	int sonuc = 0;
	for(i = 1; i<= 999999;i++){
		t=i;
		sayac = 0;
		tek= 0;
	      	cift=0;

		while(t>0){
			tc = t%10;
			if(tc %2 == 0)cift+= tc;
			else tek+=tc;
			t/=10;
		
		}
		

		if(tek == cift)sonuc++;


	}
	printf("%d",sonuc);
}
