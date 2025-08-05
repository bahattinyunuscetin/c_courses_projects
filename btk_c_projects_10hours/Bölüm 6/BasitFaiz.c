/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Basit faiz hesabının
 * C programlama dilinde yapılması
*/
 
#include <stdio.h>

int main()
{
    float ana_para, zaman, faiz_orani, faiz_miktari;

    /* Girdileri al */
    printf("Ana para miktarını giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamanı giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranını giriniz: ");
    scanf("%f", &faiz_orani);

    /* Basit faiz hesabı ile faiz miktarını hesapla */
    faiz_miktari = (ana_para * zaman * faiz_orani) / 100;

    /* Sonucu yazdır */
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı = %f", faiz_miktari);

    return 0;
}