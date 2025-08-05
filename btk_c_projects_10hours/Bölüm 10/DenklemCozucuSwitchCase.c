/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama diliyle ikinci dereceden bir denklemin
 * köklerinin hesaplanması (switch case ile)
**/

#include <stdio.h>
#include <math.h> /* sqrt() fonksiyonu için kullanılacaktır */

int main()
{
    float a, b, c;
    float kok1, kok2, imajiner;
    float diskriminant;
    
    printf("(aX^2 + bX + c) şeklindeki ikinci derece denklemin a, b ve c katsayılarını giriniz: ");
    scanf("%f%f%f", &a, &b, &c);
    
    /* Denklemin diskriminantını hesapla */
    diskriminant = (b * b) - (4 * a * c);
    
   
    /* Diskriminantı incele */
    switch(discriminant > 0)
    {

        case 1:
            /* diskriminant pozitifse */
            kok1 = (-b + sqrt(diskriminant)) / (2*a);
            kok2 = (-b - sqrt(diskriminant)) / (2*a);

            printf("İki adet ayrık ve gerçel kök bulunmaktadır: %.2f and %.2f", kok1, kok2);
            break;

        case 0:
            /* diskriminant pozitif değilse */
	    switch(discriminant < 0)
    	    {
 
              case 1:
                 /* diskriminant negatifse */
                 kok1 = kok2 = -b / (2 * a);
                 imajiner = sqrt(-diskriminant) / (2 * a);

                 printf("İki adet ayrık ve karmaşık kök bulunmaktadır: %.2f + i%.2f ve %.2f - i%.2f", 
                         kok1, imajiner, kok2, imajiner);
                 break;

               case 0:
                 /* diskriminant 0 ise */
                 kok1 = kok2 = -b / (2 * a);

                 printf("Birbirilerine eşit iki adet gerçel kök bulunmaktadır: %.2f ve %.2f", kok1, kok2);
                 break;
             }
   }

   return 0;
}