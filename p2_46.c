#include <stdio.h>

int main(){
	int n;
	int i,x;
	scanf("%d%d",&n,&x);

	int max = x;
	int min = x;

	
	for(i = 1;i<n;i++){
		scanf("%d",&x);
		
		if(x<min)min = x;
		if(x>max)max = x;
	
	}
	printf("%d",max-min);
	return 0;
}
