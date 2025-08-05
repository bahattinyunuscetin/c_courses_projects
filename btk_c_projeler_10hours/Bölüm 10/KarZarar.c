/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama dilinde kar/zarar
 * hesabı
**/

#include <stdio.h>

int main()
{
    int maliyet, satis_bedeli, kar_zarar; 
    
    /* Ürünün maliyet ve satış bedellerini kullanıcıdan al */
    printf("Maliyet bedelini giriniz: ");
    scanf("%d", &maliyet);
    printf("Satış bedelini giriniz: ");
    scanf("%d", &satis_bedeli);
    
    if(satis_bedeli > maliyet)
    {
        /* Bu durumda kar edilmiştir. Karı hesapla */
        kar_zarar = satis_bedeli - maliyet;
        printf("Kar = %d", kar_zarar);
    }
    else if(maliyet > satis_bedeli)
    {
        /* Bu durumda zarar edilmiştir. Zararı hesapla */
        kar_zarar = maliyet - satis_bedeli;
        printf("Zarar = %d", kar_zarar);
    }
    else
    {
        /* Kar veya zarar edilmemiştir. */
        printf("Kar veya zarar edilmemiştir.");
    }

    return 0;
}