/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde constant'lar
 * yani sabitler
*/

#include <stdio.h>

int main() {
  const int SaattekiDakikaSayisi = 60;
  const float PI = 3.14;

  printf("%d\n", SaattekiDakikaSayisi);
  printf("%f\n", PI);
  
  // PI = PI + 5; // Bu satırı açarsak hata alacağız
  
  return 0;
}