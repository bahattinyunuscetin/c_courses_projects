/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde işaretçi (pointer) 
 * kavramı ve uygulaması
 */

#include <stdio.h>

int main()
{
    int sayi = 10;
    int * isaretci;

    /* sayi değişkeninin adresi, isaretci isimli işaretçi (pointer)
	 * tipi değişken tarafından tutulacak
	*/
    isaretci = &sayi;

    printf("sayi değişkeninin adresi = %d\n", &sayi);
    printf("sayi değişkeninin içeriği = %d\n", sayi);

    printf("isaretci değişkeninin adresi = %d\n", &isaretci);
    printf("isaretci değişkeninin içeriği = %d\n", isaretci);
    printf("isaretci değişkeninin işaret ettiği değer = %d\n", *isaretci);

    return 0;
}