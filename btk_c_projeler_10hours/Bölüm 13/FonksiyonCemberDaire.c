/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Çemberin çapının ve çevresinin,
 * ilgili dairenin alanının
 * C programlama dilinde fonksiyonlar 
 * marifetiyle hesaplanması
 */

#include <stdio.h>
#include <math.h>  // M_PI kullanımı için

// Fonksiyon beyanları (deklarasyonları)
float CemberCapiHesapla(float yaricap); 
float CemberCevresiHesapla(float yaricap);
float DaireAlaniHesapla(float yaricap);

int main()
{
    float yaricap, cap, cevre, alan;
    
    /*
     * Kullanıcıdan yarıçap bilgisini al 
     */
    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f", &yaricap);

    /*
     * Çap, çevre ve alan değerlerini hesapla
     */
    cap = CemberCapiHesapla(yaricap);
    cevre = CemberCevresiHesapla(yaricap);
    alan = DaireAlaniHesapla(yaricap);

    /*
     * Tüm sonuçları yazdır
     */
    printf("Çemberin çapı = %.2f birimdir \n", cap);
    printf("Çemberin çevresi = %.2f birimdir \n", cevre);
    printf("Dairenin alanı = %.2f birim karedir ", alan);

    return 0;
}

/**
 * Yarıçapı verilen bir çemberin çapını hesaplayan fonksiyon
 */
float CemberCapiHesapla(float yaricap) 
{
    return (2 * yaricap);
}


/**
 * Yarıçapı verilen bir çemberin çevresini hesaplayan fonksiyon
 */
float CemberCevresiHesapla(float yaricap) 
{
    return (2 * M_PI * yaricap); // M_PI = PI = 3.14 ... 
}


/**
 * Yarıçapı verilen bir dairenin alanını hesaplayan fonksiyon
 */
float DaireAlaniHesapla(float yaricap)
{
    return (M_PI * yaricap * yaricap); // M_PI = PI = 3.14 ...
}