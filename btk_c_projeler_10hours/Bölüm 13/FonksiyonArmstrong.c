/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Bir sayının Armstrong sayısı
 * olup olmadığının
 * C programlama dilinde fonksiyon
 * marifetiyle belirlenmesi
 */
#include <stdio.h>
#include <math.h>


/* Fonksiyon beyanları (deklarasyonları) */
int SayiArmstrongMu(int sayi);

int main()
{
    int sayi;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);

    // SayiArmstrongMu() fonksiyonunu çağır ve sonucu yazdır.
    if(SayiArmstrongMu(sayi))
    {
        printf("%d bir Armstrong sayısıdır.\n", sayi);
    }
    else
    {
        printf("%d bir Armstrong sayısı değildir.\n", sayi);
    }
   
    return 0;
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
     * her bir basamağın üstellerinin toplamını hesapla
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
