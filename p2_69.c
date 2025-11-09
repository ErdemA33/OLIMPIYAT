#include <stdio.h>

int main(){
	int i;

	for(i = 1; i<= 250; i++){
		if(i % 2 == 1 && i % 3 == 2 && i % 4 == 3 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0){
			printf("%d",i);
		}
	}
}
