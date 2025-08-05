/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama diliyle, verilen bir aralık içerisindeki
 * tüm tam sayıların toplamının hesaplanması
**/

#include <stdio.h>

int main()
{
    int i, alt_sinir, ust_sinir, toplam=0;

    /* Kullanıcıdan alt sınır değerini al */
    printf("Alt sınır değerini giriniz: ");
    scanf("%d", &alt_sinir);

    /* Kullanıcıdan üst sınır değerini al */
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &ust_sinir);

    /* Tüm sayıların toplamını hesapla */
    for(i=alt_sinir; i<=ust_sinir; i++)
    {
        toplam += i;  // toplam = toplam + i diye de yazabilirdik
    }

    printf("%d ve %d arasındaki doğal sayıların toplamı = %d", alt_sinir, ust_sinir, toplam);

    return 0;
}