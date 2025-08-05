/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama dili ile, bir sayının tüm
 * çarpanlarının bulunması
**/

#include <stdio.h>

int main()
{
    int i, sayi;

    /* Çarpanları hesaplanacak sayıyı kullanıcıdan al */
    printf("Çarpanları hesaplanacak sayıyı giriniz: ");
    scanf("%d", &sayi);

    printf("%d sayısının tüm çarpanları: \n", sayi);

    /* 1'den sayıya kadar tüm sayılarda gez */
    for(i=1; i<=sayi; i++)
    {
        /* 
         * sayi, i'ye tam bölünebiliyorsa
         */
        if(sayi % i == 0)
        {
            printf("%d, ",i);
        }
    }

    return 0;
}