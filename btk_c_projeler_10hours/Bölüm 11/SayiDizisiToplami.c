/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama diliyle, 1'den verilen bir sayıya 
 * kadar tüm tam sayıların toplamının hesaplanması
**/

#include <stdio.h>

int main()
{
    int i, n, toplam=0;

    /* Kullanıcıdan üst sınır değerini al */
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    /* Tüm sayıların toplamını hesapla */
    for(i=1; i<=n; i++)
    {
        toplam += i;  // toplam = toplam + i diye de yazabilirdik
    }

    printf("İlk %d adet doğal sayının toplamı = %d", n, toplam);

    return 0;
}