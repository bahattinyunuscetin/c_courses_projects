#include <stdio.h>

// 3 satış temsilcisi, 2 kitap türü (Matematik, Yazılım), 2 satış noktası (Okul, Kırtasiye)
#define TEMSILCI_SAYISI 3
#define KITAP_TURU 2
#define SATIS_NOKTASI 2

void readSales(int sales[TEMSILCI_SAYISI][KITAP_TURU][SATIS_NOKTASI]);
void writeSales(int sales[TEMSILCI_SAYISI][KITAP_TURU][SATIS_NOKTASI]);

int main() {
    int sales[TEMSILCI_SAYISI][KITAP_TURU][SATIS_NOKTASI] = {0}; // Sıfırdan başlat
    readSales(sales);
    writeSales(sales);
    return 0;
}

// Satış verilerini okuyan fonksiyon
void readSales(int sales[TEMSILCI_SAYISI][KITAP_TURU][SATIS_NOKTASI]) {
    for (int i = 0; i < TEMSILCI_SAYISI; i++) {
        printf("%d. satış temsilcisi:\n", i + 1);

        for (int j = 0; j < KITAP_TURU; j++) {
            if (j == 0)
                printf("\tMatematik kitabı:\n");
            else
                printf("\tYazılım kitabı:\n");

            for (int k = 0; k < SATIS_NOKTASI; k++) {
                if (k == 0)
                    printf("\t\tOkula kaç adet sattı: ");
                else
                    printf("\t\tKırtasiyeye kaç adet sattı: ");

                scanf("%d", &sales[i][j][k]);
            }
        }
        printf("\n");
    }
}

// Satış verilerini analiz eden fonksiyon
void writeSales(int sales[TEMSILCI_SAYISI][KITAP_TURU][SATIS_NOKTASI]) {
    int toplamOkul = 0, toplamKirtasiye = 0;
    int toplamMatematik = 0, toplamYazilim = 0;

    for (int i = 0; i < TEMSILCI_SAYISI; i++) {
        for (int j = 0; j < KITAP_TURU; j++) {
            toplamOkul += sales[i][j][0];
            toplamKirtasiye += sales[i][j][1];
        }

        for (int k = 0; k < SATIS_NOKTASI; k++) {
            toplamMatematik += sales[i][0][k];
            toplamYazilim += sales[i][1][k];
        }
    }

    printf("\nOkula toplam %d kitap satıldı\n", toplamOkul);
    printf("Kırtasiyeye toplam %d kitap satıldı\n", toplamKirtasiye);
    printf("Toplam %d Matematik kitabı satıldı\n", toplamMatematik);
    printf("Toplam %d Yazılım kitabı satıldı\n", toplamYazilim);
}
