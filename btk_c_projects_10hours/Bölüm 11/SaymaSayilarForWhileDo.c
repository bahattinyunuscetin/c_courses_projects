/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama dili ile verilen bir sayıya kadar tüm 
 * sayma sayıları yazdırma (for, while ve do-while döngüleri ile)
**/

#include <stdio.h>

int main()
{
    int i, n;

    /* Kullanıcıdan üst sınır değerini al */
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tüm sayma sayıları : \n", n);

    /*
     * Döngü sayacını 1'den başlat (i=1) 
     * n değerine kadar git (i<=n)
     * her seferinde döngü sayacını 1 artır (i++)
     * her seferinde i değerini yazdır ve alt satıra geç
     */
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
	
	printf("...\n");
	
	i=1;
    while(i<=n)
    {
        printf("%d\n", i);
		i++;
    }
    
    printf("...\n");
    
    i=1;
    do {
        printf("%d\n", i);
		i++;
    }while(i<=n);

    return 0;
}