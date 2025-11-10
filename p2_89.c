#include <stdio.h>

int main() {
    int i;
    int ilki, ilkin;
    int a;
    int sonuc = 0;

    for(i = 1000; i < 10000; i++) {
        a = i;

        int son2 = a % 100;
        ilki = (a / 100) / 10 + (a / 100) % 10;
        ilkin = (son2 / 10) + (son2 % 10);

        if(ilki == ilkin) sonuc++;
    }

    printf("%d\n", sonuc);

    return 0;
}

