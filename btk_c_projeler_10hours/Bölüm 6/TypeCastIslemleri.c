/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde değişken tipleri
 * arasında dönüşüm işlemleri (typecasting)
 */
#include <stdio.h>

main() {

   int sayi1 = 17, sayi2 = 5;
   
   int tamsayi_bolme_sonucu;
   float gercel_bolme_sonucu_float;
   double gercel_bolme_sonucu_double;
   int gercel_bolme_sonucu_float_tamsayi;

   tamsayi_bolme_sonucu = sayi1 / sayi2;
   printf("Tamsayı Bölme Sonucu = %d\n", tamsayi_bolme_sonucu );
   
   gercel_bolme_sonucu_float = (float) sayi1 / sayi2;
   printf("Gerçek Bölme Sonucu (float) = %.20f\n", gercel_bolme_sonucu_float );

   gercel_bolme_sonucu_double = (double) sayi1 / sayi2;
   printf("Gerçek Bölme Sonucu (double) = %.20f\n", gercel_bolme_sonucu_double );
   
   gercel_bolme_sonucu_float_tamsayi = (int) gercel_bolme_sonucu_float;
   printf("Gerçek Bölme Sonucu (float)'un Tamsayıya Dönüştürülmüş Hali = %d\n", 
                  gercel_bolme_sonucu_float_tamsayi);
  
}