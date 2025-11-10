#include <stdio.h>

int main(){
	int i;
	int a,s;
	int sonuc,rakamtoplam,hepsi = 0;
	for(i = 10; i<= 1000; i++){
		sonuc = 0;
		rakamtoplam = 0;
		s = i;

		if(s % 3 == 0)sonuc++;

		while(s>0){
			a = s%10;
			rakamtoplam+=a;
			s/=10;

		}

		if(rakamtoplam == 15)sonuc++;

		if(sonuc == 2)hepsi++;
	}
	printf("%d",hepsi);
}
