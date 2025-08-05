/* BTK Akademi - C Programlama Dili Kursu */

/**
 * Merdiven yapılı koşullu ifadeler 
 * if-else'ler ile 
 * sayı karşılaştırma işlemlerinin
 * C programlama dilinde yapılması
*/

#include <stdio.h>

int main()
{
    int sayi1, sayi2, sayi3, maksimum;

    /* Kullanıcıdan 3 sayı değeri al */
    printf("Lütfen 3 adet sayı giriniz: ");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
 
 
    if((sayi1 > sayi2) && (sayi1 > sayi3))
    {
        /* sayi1 diğer ikisinden de büyükse */
        maksimum = sayi1;
    }
    else if((sayi2 > sayi1) && (sayi2 > sayi3))
    {
        /* sayi2 diğer ikisinden de büyükse */
        maksimum = sayi2;
    }
    else if((sayi3 > sayi1) && (sayi3 > sayi2))
    {
        /* sayi3 diğer ikisinden de büyükse */
        maksimum = sayi3;
    }

    /* Maksimum değeri yazdır */
    printf("3 sayı içerisinde en büyük değer = %d", maksimum);

    return 0;
}