#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define YOL_UZUNLUGU 20
#define OYUN_ALANI_GENISLIK 10

int arabaKonumu = YOL_UZUNLUGU / 2;
int oyunDevamEdiyor = 1;

void ekranTemizle() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void oyunAlaniCiz() {
    for (int i = 0; i < YOL_UZUNLUGU; i++) {
        if (i == arabaKonumu) {
            printf("A");
        } else {
            printf("-");
        }
    }
    printf("\n");
}

void oyunuGuncelle() {
    if (_kbhit()) {
        char tus = _getch();

        if (tus == 'a' && arabaKonumu > 0) {
            arabaKonumu--;
        } else if (tus == 'd' && arabaKonumu < YOL_UZUNLUGU - 1) {
            arabaKonumu++;
        } else if (tus == 'q') {
            oyunDevamEdiyor = 0;
        }
    }
}

int main() {
    while (oyunDevamEdiyor) {
        ekranTemizle();
        oyunuGuncelle();
        oyunAlaniCiz();

        // Oyunun devam ettiðini ve kullanýcýnýn "q" tuþuna basmadýðýný kontrol et
        if (oyunDevamEdiyor) {
            // Oyunu biraz yavaþlatmak için beklet
            for (int i = 0; i < 1000000; i++) {}
        }
    }

    printf("Oyun sona erdi.\n");
    return 0;
}

