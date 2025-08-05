/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Çemberin çapının ve çevresinin,
 * ilgili dairenin alanının
 * C programlama dilinde hesaplanması
 */

/* Önceki koddan farklı olarak bu sefer 
 * pi sayısını math.h kütüphanesinden alacağız
*/

#include <stdio.h>
#include <math.h>  // M_PI sayısını kullanmak amacıyla

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
    cap = 2 * yaricap;
    cevre = 2 * M_PI * yaricap;
    alan = M_PI * (yaricap * yaricap);

    /*
     * Tüm sonuçları yazdır
     */
    printf("Çemberin çapı = %.2f birimdir \n", cap);
    printf("Çemberin çevresi = %.2f birimdir \n", cevre);
    printf("Dairenin alanı = %.2f birim karedir ", alan);

    return 0;
}