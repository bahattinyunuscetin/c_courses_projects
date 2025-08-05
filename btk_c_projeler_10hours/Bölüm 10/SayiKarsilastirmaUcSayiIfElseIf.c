/* BTK Akademi - C Programlama Dili Kursu */

/**
 * Merdiven yapılı koşullu ifadeler 
 * if-else if'ler ile 
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
        /* sayi1 > sayi2 ve sayi1 > sayi3 ise */
        maksimum = sayi1;
    }
    else if(sayi2 > sayi3)
    {
        /* sayi1 > sayi2 değilse ve sayi2 > sayi3 ise */
        maksimum = sayi2;
    }
    else
    {
        /* sayi1 > sayi2 değilse; ayrıca sayi2 > sayi3 değilse */
        maksimum = sayi3;
    }

    /* Maksimum değeri yazdır */
    printf("3 sayı içerisinde en büyük değer = %d", maksimum);

    return 0;
}