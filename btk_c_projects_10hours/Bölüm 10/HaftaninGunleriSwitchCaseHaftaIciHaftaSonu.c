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
        case 1: 
            printf("Hafta İçi");
            break;
        case 2: 
            printf("Hafta İçi");
            break;
        case 3: 
            printf("Hafta İçi");
            break;
        case 4: 
            printf("Hafta İçi");
            break;
        case 5: 
            printf("Hafta İçi");
            break;
        case 6: 
            printf("Hafta Sonu");
            break;
        case 7: 
            printf("Hafta Sonu");
            break;
        default: 
            printf("Geçersiz değer!... Lütfen 1 ile 7 arasında bir sayı giriniz.");    }

    return 0;
}