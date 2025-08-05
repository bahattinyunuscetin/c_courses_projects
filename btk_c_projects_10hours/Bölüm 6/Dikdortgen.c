/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Dikdörtgen alanının ve çevresinin
 * C programlama dilinde hesaplanması
 */

#include <stdio.h>

int main()
{
    float boy, en, cevre, alan;

    /*
     * Uzunluk ve genişlik değerlerini kullanıcıdan al
     */
    printf("Dikdörtgenin uzunluğunu giriniz: ");
    scanf("%f", &boy);
    printf("Dikdörtgenin genişliğini giriniz: ");
    scanf("%d", &en);

    /* Dikdörtgenin çevresini hesapla */
    cevre = 2 * (boy + en);

    /* Dikdörtgenin çevresini yazdır */
    printf("Dikdörtgenin çevresi = %f birimdir", cevre);

    /* Dikdörtgenin alanını hesapla */
    alan = boy * en;

    /* Dikdörtgenin alanını yazdır */
    printf("Dikdörtgenin alanı = %f birim karedir", alan);

    return 0;
}