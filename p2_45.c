#include <stdio.h>

int main(){
	
	int x,n,a;
	int i,esit = 0;

	scanf("%d%d",&a,&n);

	for(i = 0; i < n; i++){
		scanf("%d",&x);

		if(x == a)esit++;
	
	
	}
	
	printf("%d",esit);

}
