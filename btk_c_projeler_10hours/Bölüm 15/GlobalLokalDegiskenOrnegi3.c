/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde global ve lokal
 * değişkenler; fonksiyon parametreleri
 */

#include <stdio.h>
 
/* global değişken beyanı (deklarasyonu) */
int a = 20;

/* Verilen iki sayıyı toplayan fonksiyon */
int BaziIslemlerGerceklestir(int a, int b) {

   printf ("a değişkeninin BaziIslemlerGerceklestir() fonksiyonu içerisindeki giriş değeri = %d\n",  a);
   printf ("b değişkeninin BaziIslemlerGerceklestir() fonksiyonu içerisindeki giriş değeri = %d\n",  b);
   
   a *= 12;
   b += 5;

   printf ("a değişkeninin BaziIslemlerGerceklestir() fonksiyonu içerisindeki sonraki değeri = %d\n",  a);
   printf ("b değişkeninin BaziIslemlerGerceklestir() fonksiyonu içerisindeki sonraki değeri = %d\n",  b);

   return a + b;
} 

int main () {

  /* lokal değişken beyanı (deklarasyonu) */
  int a = 10;
  int b = 20;
  int c = 0;

  printf ("a değişkeninin main() içerisindeki değeri = %d\n",  a);
  printf ("b değişkeninin main() içerisindeki değeri = %d\n",  b);
  c = BaziIslemlerGerceklestir(a, b);
  printf ("c değişkeninin main() içerisindeki değeri = %d\n",  c);

  printf ("a değişkeninin main() içerisindeki değeri = %d\n",  a);
  printf ("b değişkeninin main() içerisindeki değeri = %d\n",  b);
  
  

  return 0;
}

