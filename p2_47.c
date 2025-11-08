#include <stdio.h>

int main(){
	int x,y;
	int i,j;
	scanf("%d%d",&x,&y);

	for(i=1;i<=y;i++){
		printf("\n");
		for(j = 0;j<x;j++) printf("%d ",i);
	}
	return 0;
}
