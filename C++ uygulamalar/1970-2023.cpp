#include <stdio.h>

int main() {
    int i, toplam;
    int yil = 1970;
    int yilartis = 4;

    toplam = 30000;
    for(i = yil; i <= 2023; i += 4) 	
	{
        toplam = toplam + (toplam * yilartis / 100);
        
        printf("Nufus %d yili: %d\n", i, toplam);
    }
}
