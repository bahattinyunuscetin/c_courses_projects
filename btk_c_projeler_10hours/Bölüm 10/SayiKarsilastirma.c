/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Koşullu ifadeler ile 
 * sayı karşılaştırma işlemlerinin
 * C programlama dilinde yapılması
*/
#include <stdio.h>

int main()
{
    int sayi1, sayi2;

    /* Kullanıcıdan iki sayı al */
    printf("Lütfen iki sayı değeri giriniz: ");
    scanf("%d%d", &sayi1, &sayi2);

    /* sayi1 daha büyükse */
    if(sayi1 > sayi2)
    {
        printf("%d daha büyüktür", sayi1);        
    }

    /* sayi2 daha büyükse */
    if(sayi2 > sayi1)
    {
        printf("%d daha büyüktür", sayi2);
    }

    /* eşitlik durumunu da kontrol et */
    if(sayi1 == sayi2)
    {
        printf("İki sayı eşittir");
    }

    return 0;
}