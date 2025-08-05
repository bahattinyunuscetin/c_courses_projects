/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde aynı isimli global ve lokal
 * değişkenler
 */

#include <stdio.h>
 
/* global değişken beyanı (deklarasyonu) */
int g = 20;
 
int main () {

  printf ("g = %d\n",  g);

  /* lokal değişken beyanı (deklarasyonu) */
  int g = 10;
 
  printf ("g = %d\n",  g);
 
  return 0;
}