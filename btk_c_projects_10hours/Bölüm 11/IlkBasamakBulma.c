/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dili ile, verilen bir sayının
 * ilk basamağının hesaplanması
**/

#include <stdio.h>

int main()
{
    int n, ilk_basamak;

    /* Kullanıcıdan sayı değerini al */
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &n);

    ilk_basamak = n;

    /* Tek basamağa düşene kadar sayıyı indirge */
    while(ilk_basamak >= 0)
    {
       ilk_basamak = ilk_basamak / 10;
    }

    printf("İlk Basamak = %d", ilk_basamak);

    return 0;
}