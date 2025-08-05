/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Karekök hesabının
 * C programlama dilinde yapılması
*/
 
#include <stdio.h>
#include <math.h> // sqrt() fonksiyonunu kullanabilmek için

int main()
{
    double sayi, karekok;

    /* Kullanıcıdan sayı değeri al */
    printf("Karekökü hesaplanacak sayıyı giriniz : ");
    scanf("%lf", &sayi);

    /* Sayının karekökünü hesapla */
    karekok = sqrt(sayi);

    /* Sonucu yazdır */
    printf("%.2lf sayısının karekökü = %.2lf", sayi, karekok);

    return 0;
}