/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Santimetre, metre ve kilometre
 * birim çevrimlerinin
 * C programlama dilinde yapılması
*/

#include <stdio.h>

int main()
{
    float cm, metre, km;

    /* Uzunluğu santimetre cinsinden al */
    printf("Uzunluğu santimetre cinsinden giriniz: ");
    scanf("%f", &cm);

    /* Çevrim işlemlerini gerçekleştir */
    metre = cm / 100.0;
    km    = cm / 100000.0;

    printf("Metre cinsinden uzunluk = %.3f m \n", metre);
    printf("Kilometre cinsinden uzunluk = %.3f km", km);

    return 0;
}