/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde işaretçi (pointer) 
 * ile toplama işlemi
 */

#include <stdio.h>

int main()
{
    int sayi1, sayi2, toplam;
    int *isaretci1, *isaretci2;

    isaretci1 = &sayi1; // isaretci1, sayi1'in adresini tutmakta
    isaretci2 = &sayi2; // isaretci2, sayi2'nin adresini tutmakta

    printf("İki sayı giriniz: ");
    scanf("%d%d", isaretci1, isaretci2); // buraya dikkat; scanf kullanımında!...

    toplam = *isaretci1 + *isaretci2;

    printf("Toplam = %d", toplam);

    return 0;
}
