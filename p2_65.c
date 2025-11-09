#include <stdio.h>

int main(){
	int x;

	scanf("%d",&x);

	dongu:;
	
		printf("%d",x--);
		if(x>0)
			goto dongu;

	return 0;
}
