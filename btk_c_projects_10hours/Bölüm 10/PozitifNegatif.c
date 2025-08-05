/* BTK Akademi - C Programlama Dili Kursu */

/**
 * Sadece if ifadeleri ile bir sayının pozitif
 * veya negatif olup olmadığının belirlenmesi
**/

#include <stdio.h>

int main()
{
    int sayi;
    
    /* Kullanıcıdan sayı değerini al */
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);
    

    if(sayi > 0)
    {
        printf("Birinci Blok: Girmiş olduğunuz sayı pozitiftir");
    }
    if(sayi < 0)
    {
        printf("İkinci Blok: Girmiş olduğunuz sayı negatiftir");
    }
    if(sayi == 0)
    {
        printf("Üçüncü Blok: Girmiş olduğunuz sayı sıfırdır");
    }

    return 0;
}