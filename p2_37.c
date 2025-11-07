#include <stdio.h>

int main(){
	
	double i,toplam = 0;

	for(i=1;i<=100;i++){
    		toplam +=i / (101-i);
    
    
	}
	printf("%f",toplam);


	return 0;
}


