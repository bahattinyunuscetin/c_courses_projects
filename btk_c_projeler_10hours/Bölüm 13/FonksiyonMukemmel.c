/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Bir sayının mükemmel sayı olup olmadığının
 * C programlama dilinde fonksiyon
 * marifetiyle belirlenmesi
 */
#include <stdio.h>
#include <math.h>


/* Fonksiyon beyanları (deklarasyonları) */
int SayiMukemmelMi(int sayi);

int main()
{
    int sayi;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);
    
    // SayiMukemmelMi() fonksiyonunu çağır ve sonucu yazdır.
    if(SayiMukemmelMi(sayi))
    {
        printf("%d bir mükemmel sayıdır.\n", sayi);
    }
    else
    {
        printf("%d bir mükemmel sayı değildir.\n", sayi);
    }
    
    return 0;
}

/**
 * Bir sayının mükemmel sayı olup olmadığı kontrol eden fonksiyon
 * Sayı mükemmelse 1, değilse 0 sonucunu döndürür.
 */
int SayiMukemmelMi(int sayi) 
{
    /* Kendisi hariç, pozitif tam bölenlerinin toplamı 
	   kendisine eşit olan bir sayı, mükemmel sayı olarak anılır.
     */	   
	/* Örnek 1: 6 sayısının kendisi hariç bölenleri: 1,2,3
	   1 + 2 + 3 = 6 olduğundan, 6 mükemmel sayıdır.
	   
	   Örnek 2: 28 sayısının kendisi hariç bölenleri: 1,2,4,7,14
	   1 + 2 + 4 + 7 + 14 = 28 olduğundan, 28 mükemmel sayıdır.
	 */
	
	int i, toplam, n;
    toplam = 0;
    n = sayi;
    
    for(i = 1; i < n; i++)  
    {  
        /* sayı, i değerine bölünüyorsa */  
        if(n % i == 0)  
        {  
            toplam += i;  
        }  
    }
    
    return (sayi == toplam);
}