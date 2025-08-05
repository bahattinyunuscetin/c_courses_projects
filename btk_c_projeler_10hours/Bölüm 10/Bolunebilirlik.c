/**
 * C programlama dili ile bir sayının başka sayıya
 * bölünebilirliğinin kontrolü
 */

#include <stdio.h>

int main()
{
    int sayi;

    /* Kullanıcıdan sayı değerini al */
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);
 
    /*
     * sayı modülo 5 = 0 ise sayı 5'e bölünebiliyordur
     * sayı modülo 11 = 0 ise sayı 11'e bölünebiliyordur
     */
    if((sayi % 5 == 0) && (sayi % 11 == 0))
    {
        printf("Sayı, hem 5'e hem de 11'e bölünebilmektedir.");
    }
    else
    {
        printf("Sayı, 5 veya 11 değerlerinden en az birine bölünememektedir.");
    }

    return 0;
}


/* Aşağıdaki kod parçasını da inceleyebilirsiniz */
/*

if(!(num % 5) && !(num % 11))
        printf("Sayı, hem 5'e hem de 11'e bölünebilmektedir.");
else
        printf("Sayı, 5 veya 11 değerlerinden en az birine bölünememektedir.");

*/