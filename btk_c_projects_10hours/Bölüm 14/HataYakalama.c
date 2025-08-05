/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde hata yakalama
 * ve programdan çıkış
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

   int bolunen = 20;
   int bolen = 0;
   int bolum;
 
   if( bolen == 0){
      fprintf(stderr, "Sıfıra Bölme Hatası! Programdan Çıkılıyor...\n");
      exit(-1); // exit(EXIT_FAILURE);
   }
   
   bolum = bolunen / bolen;
   fprintf(stderr, "Bölüm (Sonuç) : %d\n", bolum );

   exit(0);  // exit(EXIT_SUCCESS);
}