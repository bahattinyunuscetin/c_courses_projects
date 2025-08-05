/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama diliyle verilen yılın
 * artık yıl olup olmadığını belirlenmesi
**/

#include <stdio.h>

int main()
{
    int yil;

    /* Kullanıcıdan yıl değerini alınız */
    printf("Yıl değerini giriniz : ");
    scanf("%d", &yil);


    /*
     * Değer 4'e bölünebiliyorsa ve 100'e bölünemiyorsa
     * veya değer 400'e bölünebiliyorsa 
     * ilgili yıl Artık Yıl'dır.
     * Aksi takdirde Artık Yıl değildir.
     */
    if(((yil % 4 == 0) && (yil % 100 != 0)) || (yil % 400 == 0))
    {
        printf("Söz konusu yıl, artık yıldır!...");
    }
    else
    {
        printf("Söz konusu yıl, artık yıl değildir!...");
    }

    return 0;
}