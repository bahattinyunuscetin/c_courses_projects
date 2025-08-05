/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Karakter girdi ve çıktı işlemlerinin
 * getchar() ve putchar() fonksiyonları
 * ile gerçekleştirilmesi
 */

#include <stdio.h>

int main()
{
    char ogrenci_notu;
    printf("Öğrenci notunu giriniz: ");

    /* getchar() komutu ile notu al ve ogrenci_notu değişkeninde sakla */
    ogrenci_notu = getchar();

    /* putchar() komutu ile notu çıktı olarak ver */
    putchar(ogrenci_notu);

    return 0;
}