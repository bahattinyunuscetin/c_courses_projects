/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama dili ile haftanın günlerini
 * isim bazında yazdırma (switch-case ile)
**/

#include <stdio.h>

int main()
{
    int gun;

    /* Kullanıcıdan, haftanın kaçıncı günü olduğunun bilgisini al*/
    printf("Günün, haftanın kaçıncı günü olduğunu giriniz (1-7): ");
    scanf("%d", &gun);

    switch(gun)
    {
        case (1 || 2 || 3 || 4 || 5):  // hata verecek, böyle bir kullanım yok
            printf("Hafta İçi");
            break;
        case (6 || 7):  // hata verecek, böyle bir kullanım yok
            printf("Hafta Sonu");
            break;
        default: 
            printf("Geçersiz değer!... Lütfen 1 ile 7 arasında bir sayı giriniz.");    }

    return 0;
}