/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Bir sayının çift olup olmadığının
 * C programlama dilinde fonksiyon 
 * marifetiyle belirlenmesi
 */
#include <stdio.h>


/**
 * Bir sayının çift olup olmadığını belirleyen fonksiyon
 * Sayı çiftse 1, tekse 0 döndürür
 */
int SayiCiftMi(int sayi)
{
    if ((sayi % 2) == 0)
		return 1;
	else
		return 0;
}


int main()
{
    int sayi;
    
    /* Kullanıcıdan sayıyı al */
    printf("Sayı değerinin giriniz: ");
    scanf("%d", &sayi);
    
    
    /* SayiCiftMi() fonksiyonunun sonuçlarını gör */
    if(SayiCiftMi(sayi))
    {
        printf("Bu bir çift sayıdır.");
    }
    else
    {
        printf("Bu bir tek sayıdır.");
    }
    
    return 0;
}