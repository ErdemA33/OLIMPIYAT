#include <stdio.h>

int main(){
	int x,y;
	int i,j;
	scanf("%d%d",&x,&y);

	for(i = 1;;i++){
		for(j=1;;j++){
			if(x*i == y*j){
				printf("%d",y*j);
				return 0;
			}
			if(y * j > x * i) break;	


		}
	}
	return 0;

}
