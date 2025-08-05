/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Kuvvet/üs hesaplarının
 * C programlama dilinde yapılması
*/

#include <stdio.h>
#include <math.h> // pow() fonksiyonunu kullanabilmek için

int main()
{
    double taban, kuvvet, sonuc;

    /* Kullanıcıdan iki sayı al */
    printf("Taban değerini giriniz: ");
    scanf("%lf", &taban);
    printf("Kuvvet değerini giriniz: ");
    scanf("%lf", &kuvvet);

    /* taban^kuvvet değerini hesapla */
    sonuc = pow(taban, kuvvet);

    printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);

    return 0;
}