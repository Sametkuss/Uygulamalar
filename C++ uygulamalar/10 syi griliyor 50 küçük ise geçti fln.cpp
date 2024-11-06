#include <stdio.h>

int main() {
    // ��renci say�s�
    int ogrenci_sayisi = 10;

    // Notlar� tutmak i�in dizi
    int notlar[ogrenci_sayisi];

    // Ge�en ve kalan ��renci say�lar�
    int gecen_sayisi = 0;
    int kalan_sayisi = 0;

    // Kullan�c�dan notlar� al
    for (int i = 0; i < ogrenci_sayisi; ++i) {
        printf("��renci %d notunu girin: ", i + 1);
        scanf("%d", &notlar[i]);

        // Not kontrol�
        if (notlar[i] >= 50) {
            gecen_sayisi++;
        } else {
            kalan_sayisi++;
        }
    }

    // Ge�en ve kalan ��renci say�lar�n� ekrana yazd�r
    printf("\nGe�en ��renci say�s�: %d\n", gecen_sayisi);
    printf("Kalan ��renci say�s�: %d\n", kalan_sayisi);

    return 0;
}

