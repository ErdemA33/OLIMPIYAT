#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    for (int i = a; i >= 0; i -= b){
        printf("%d ", i);
    }

    return 0;
}

