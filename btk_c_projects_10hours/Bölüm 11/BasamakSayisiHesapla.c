/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dili ile, bir tamsayının
 * basamak sayısının hesaplanması
**/

#include <stdio.h>

int main()
{
    long long sayi;
    int sayac = 0;

    /* Kullanıcıdan sayıyı al */
    printf("Lütfen bir sayı giriniz: ");
    scanf("%lld", &sayi);

    /* sayi 0'dan büyük olduğu sürece aşağıdaki döngüyü koştur */
    do
    {
        /* Basamak sayacını 1 artır */
        sayac++;

        /* 'sayi'nin bir basamağını eksilt */
        sayi /= 10;    // sayi = sayi / 10 da diyebilirdik
    } while(sayi != 0);

    printf("Toplam basamak sayısı: %d", sayac);

    return 0;
}