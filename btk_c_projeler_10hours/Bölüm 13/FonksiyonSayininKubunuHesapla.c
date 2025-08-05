/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama dili ile bir sayının kübünü hesaplama
 * (bu işe özel bir fonksiyon yazarak)
**/
#include <stdio.h>

/* Fonksiyon beyanı/deklarasyonu */
double SayininKubunuHesapla(double sayi);

int main()
{
    int sayi;
    double c;
    
    /* Kübü hesaplanacak sayıyı kullanıcıdan al */
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);
    
    c = SayininKubunuHesapla(sayi);

    printf("%d sayısının kübü = %.2f", sayi, c); 
    
    return 0;
}

/**
 * Verilen bir sayının kübünü hesaplayan fonksiyon
 */
double SayininKubunuHesapla(double sayi)
{
    return (sayi * sayi * sayi);
}