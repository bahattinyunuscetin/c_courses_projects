/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama dili ile verilen bir sayıya kadar tüm 
 * çift sayıları yazdırma (for döngüsü ile)
**/

#include <stdio.h>

int main()
{
    int i, n;

    /* Kullanıcıdan üst sınır değerini al */
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tüm çift sayılar : \n", n);

    /*
     * Döngü sayacını 1'den başlat (i=1) 
     * n değerine kadar git (i<=n)
     * her seferinde döngü sayacını 1 artır (i++)
     * her seferinde i değerinin 2'ye bölünüp bölünemediğini kontrol et 
     * 2'ye bölünüyorsa yazdır ve alt satıra geç
     */
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        { 
            printf("%d\n", i);
        }
    }

    return 0;
}