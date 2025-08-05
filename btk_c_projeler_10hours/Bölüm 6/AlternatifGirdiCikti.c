/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Girdi ve çıktı işlemlerinin
 * scanf() ve print() fonksiyonları
 * ile gerçekleştirilmesi
 */

#include <stdio.h>

int main()
{
    int sayi1, sayi2, toplam;
    
    /* Kullanıcıya mesaj yaz */
    printf("İki sayı giriniz: ");

    /* İki değeri kullanıcıdan al */
    scanf("%d%d", &sayi1, &sayi2);

    /* Sayıları topla */
    toplam = sayi1 + sayi2;

    /* Toplamı yazdır */
    printf("Toplam = %d", toplam);

    return 0;
}