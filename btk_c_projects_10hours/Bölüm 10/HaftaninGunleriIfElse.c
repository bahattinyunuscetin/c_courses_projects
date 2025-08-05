/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama dili ile haftanın günlerini
 * isim bazında yazdırma
**/

#include <stdio.h>

int main()
{
    int gun;

    /* Kullanıcıdan, haftanın kaçıncı günü olduğunun bilgisini al*/
    printf("Günün, haftanın kaçıncı günü olduğunu giriniz (1-7): ");
    scanf("%d", &gun);


    if(gun == 1)
    {
        printf("Pazartesi");
    }
    else if(gun == 2)
    {
        printf("Salı");
    }
    else if(gun == 3)
    {
        printf("Çarşamba");
    }
    else if(gun == 4)
    {
        printf("Perşembe");
    }
    else if(gun == 5)
    {
        printf("Cuma");
    }
    else if(gun == 6)
    {
        printf("Cumartesi");
    }
    else if(gun == 7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Geçersiz değer!... Lütfen 1 ile 7 arasında bir sayı giriniz.");
    }

    return 0;
}