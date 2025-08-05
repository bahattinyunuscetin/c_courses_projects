/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Bir sayının asal sayı, Armstrong sayısı,
 * mükemmel sayı olup olmadığının
 * C programlama dilinde fonksiyonlar 
 * marifetiyle belirlenmesi
 */
#include <stdio.h>
#include <math.h>


/* Fonksiyon beyanları (deklarasyonları) */
int SayiAsalMi(int sayi);
int SayiArmstrongMu(int sayi);
int SayiMukemmelMi(int sayi);

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
    
    // SayiArmstrongMu() fonksiyonunu çağır ve sonucu yazdır.
    if(SayiArmstrongMu(sayi))
    {
        printf("%d bir Armstrong sayısıdır.\n", sayi);
    }
    else
    {
        printf("%d bir Armstrong sayısı değildir.\n", sayi);
    }
    
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
 * Bir sayının asal sayı olup olmadığı kontrol eden fonksiyon
 * Sayı asalsa 1, değilse 0 sonucunu döndürür.
 */
int SayiAsalMi(int sayi) 
{
    int i;
    
	/* Kendisi ve 1 haricinde başka hiç bir sayıya tam
	 * bölünmeye bir sayı, Asal Sayı olarak anılır.
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



/**
 * Bir sayının Armstrong sayısı olup olmadığı kontrol eden fonksiyon
 * Sayı Armstrong sayısıysa 1, değilse 0 sonucunu döndürür.
 */
int SayiArmstrongMu(int sayi) 
{
    /* n basamaklı bir sayı için
	   abc...klm = (a^n) + (b^n) + (c^n) + ... + (k^n) + (l^n) + (m^n) 
	   
	   Örnek 1: 153 = (1^3) + (5^3) + (3^3) = 1 + 125 + 27  
	   -> 153 bir Armstrong Sayısıdır

	   Örnek 2: 1634 = (1^4) + (6^4) + (3^4) + (4^4) = 1 + 1296 + 81 + 256  
	   -> 1634 bir Armstrong Sayısıdır
	   
	*/
	
	int son_basamak, toplam, orijinal_sayi, basamak_sayisi;
    toplam = 0;
    
    orijinal_sayi = sayi;

    /* Sayının kaç basamaklı olduğunu hesapla */
    basamak_sayisi = (int) log10(sayi) + 1;

    /*
     * Her bir basamağın üstellerinin toplamını hesapla
     */
    while(sayi > 0)
    {
        // Son basamağı al
        son_basamak = sayi % 10;

        // Son basamağın üstelini hesapla ve toplam değişkenine ekle
        toplam = toplam + round(pow(son_basamak, basamak_sayisi));

        // Son basamağı yok et
        sayi = sayi / 10;
    }
    
    return (orijinal_sayi == toplam);
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