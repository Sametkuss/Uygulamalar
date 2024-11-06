#include <stdio.h>

int main() {
    // Öðrenci sayýsý
    int ogrenci_sayisi = 10;

    // Notlarý tutmak için dizi
    int notlar[ogrenci_sayisi];

    // Geçen ve kalan öðrenci sayýlarý
    int gecen_sayisi = 0;
    int kalan_sayisi = 0;

    // Kullanýcýdan notlarý al
    for (int i = 0; i < ogrenci_sayisi; ++i) {
        printf("Öðrenci %d notunu girin: ", i + 1);
        scanf("%d", &notlar[i]);

        // Not kontrolü
        if (notlar[i] >= 50) {
            gecen_sayisi++;
        } else {
            kalan_sayisi++;
        }
    }

    // Geçen ve kalan öðrenci sayýlarýný ekrana yazdýr
    printf("\nGeçen öðrenci sayýsý: %d\n", gecen_sayisi);
    printf("Kalan öðrenci sayýsý: %d\n", kalan_sayisi);

    return 0;
}

