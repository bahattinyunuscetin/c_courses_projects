/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde global ve lokal
 * değişkenler
 */

#include <stdio.h>

/*
Global değişkenler, eğer programcı tarafından belirtilmezse
derleyici tarafından otomatik olarak ilklendirilir

Veri Tipi	Varsayılan İlklendirme Değeri
int						 0
char					'\0'
float					 0
double					 0
pointer					NULL
*/
 
/* global değişken beyanı (deklarasyonu) */
int g;
 
int main () {

  /* lokal değişkenlerin beyanı (deklarasyonu) */
  int a, b;
  /*
  Lokal değişkenler, eğer programcı tarafından belirtilmezse
  derleyici tarafından otomatik olarak ilklendirilMEZ.
  Bilgisayar belleğinde kalan garip/tuhaf değerleri almamaları 
  için programcılar tarafından ilklendirilmelerinde fayda bulunmaktadır.
  */
 
  /* ilklendirme */
  a = 10;
  b = 20;
  g = a + b;
 
  printf ("a = %d, b = %d ve g = %d\n", a, b, g);
 
  return 0;
}