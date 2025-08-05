/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Bir sayının asal sayı olup olmadığının
 * C programlama dilinde fonksiyon 
 * marifetiyle belirlenmesi
 */
#include <stdio.h>
#include <math.h>


/* Fonksiyon beyanları (deklarasyonları) */
int SayiAsalMi(int sayi);

int main()
{
    int sayi;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);
    
    // SayiAsalMi() fonksiyonunu çağır ve sonucu yazdır.
    if(SayiAsalMi(sayi))
    {
        printf("%d bir asal sayıdır.\n", sayi);
    }
    else
    {
        printf("%d bir asal sayı değildir.\n", sayi);
    }
        
    return 0;
}


/**
 * Bir sayının asal sayı olup olmadığı kontrol eden fonksiyon
 * Sayı asalsa 1, değilse 0 sonucunu döndürür.
 */
int SayiAsalMi(int sayi) 
{
    int i;
    
	/* Kendisi ve 1 haricinde başka hiç bir sayıya tam
	 * bölünmeyen bir sayı, Asal Sayı olarak anılır.
	 */
	
    for(i = 2; i <= sayi/2 ; i++)  
    {  
        /*  
         * Sayı, başka bir sayıya bölünüyorsa asal değildir
         */  
        if(sayi % i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}
