/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama diliyle, verilen bir sayının
 * çarpım tablosunun oluşturulması
**/

#include <stdio.h>

int main()
{
    int i, sayi;

    /* Çarpım tablosu oluşturulacak olan sayıyı kullanıcıdan al */
    printf("Çarpım tablosu oluşturulacak olan sayıyı giriniz: ");
    scanf("%d", &sayi);

    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", sayi, i, (sayi*i));
    }

    return 0;
}