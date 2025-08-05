/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde değişken
 * adreslerine erişim
 */

#include <stdio.h>

int main()
{
    /* Değişken beyanları (deklarasyonları) */
	
	char karakter = 'C';
    int tamsayi = 1;
    float gercel_sayi = 10.4f;
    long long buyuk_tamsayi = 989898989ll;

	/* Ampersand (and per se and) olarak da anılan & işareti ile herhangi bir 
	 * değişkenin bellekteki adresi alınabilir
	*/
    /* Her bir değişkenin değerini ve adresini yazdır */
    printf("karakter değişkeninin değeri= %c, karakter değişkeninin adresi = %u\n", karakter, &karakter);
    printf("tamsayi değişkeninin değeri= %d, tamsayi değişkeninin adresi= %u\n", tamsayi, &tamsayi);
    printf("gercel_sayi değişkeninin değeri= %f, gercel_sayi değişkeninin adresi= %u\n", gercel_sayi, &gercel_sayi);
    printf("buyuk_tamsayi değişkeninin değeri= %lld, buyuk_tamsayi değişkeninin adresi= %u", buyuk_tamsayi, &buyuk_tamsayi);

    return 0;
}