/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Temel aritmetik işlemlerinin
 * C programlama dilinde gerçekleştirilmesi
 */

#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    int toplam, fark, carpim, mod;
    float bolum;

    /*
     * Kullanıcıdan iki sayı al
     */
    printf("Lütfen iki sayı giriniz: ");
    scanf("%d%d", &sayi1, &sayi2);

    /*
     * Tüm aritmetik işlemleri gerçekleştir
     */ 
    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;
    bolum = (float)sayi1 / sayi2;
    mod = sayi1 % sayi2;

    /*
     * Sonuçları yazdır
     */
    printf("Toplam = %d\n", toplam);
    printf("Fark = %d\n", fark);
    printf("Çarpım = %d\n", carpim);
    printf("Bölüm = %f\n", bolum);
    printf("Kalan veya Modülo = %d", mod);

    return 0; 
}