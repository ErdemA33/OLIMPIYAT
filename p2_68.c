#include <stdio.h>

int main(){
	int i;

	for(i = 1000;;i++){
		if(i % 4 == 3 && i % 7 == 3){
			printf("%d",i);
			break;
		}
	}

}
