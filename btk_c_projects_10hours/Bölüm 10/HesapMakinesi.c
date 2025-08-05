/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama diliyle basit bir 
 * hesap makinesi uygulaması (switch case ile)
**/

#include <stdio.h>

int main()
{
    char islem;
    float sayi1, sayi2, sonuc=0.0f;

    /* Karşılama mesajı yazdır */
    printf("BASİT HESAP MAKİNESİ UYGULAMASI\n");
    printf("-------------------------------\n");
    printf("Lütfen [sayı 1] [+ - * /] [sayı 2] giriniz\n");

    /* İki sayıyı ve işlem işaretini kullanıcıdan al */
    scanf("%f %c %f", &sayi1, &islem, &sayi2);

    /* İşlem işaretine göre faaliyet gerçekleştir */
    switch(islem)
    {
        case '+': 
            sonuc = sayi1 + sayi2;
            break;

        case '-': 
            sonuc = sayi1 - sayi2;
            break;

        case '*': 
            sonuc = sayi1 * sayi2;
            break;

        case '/': 
            sonuc = sayi1 / sayi2;
            break;

        default: 
            printf("Geçersiz işlem!...");
    }

    /* Sonuçları yazdır */
    printf("%.2f %c %.2f = %.2f", sayi1, islem, sayi2, sonuc);

    return 0;
}