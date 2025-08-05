/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dili ile, verilen bir sayının
 * son basamağının hesaplanması
**/

#include <stdio.h>

int main()
{
    int n, son_basamak;

    /* Kullanıcıdan sayı değerini al */
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &n);

    /* Son basamağı hesapla */
    son_basamak = n % 10;

    printf("Son Basamak = %d", son_basamak);

    return 0;
}