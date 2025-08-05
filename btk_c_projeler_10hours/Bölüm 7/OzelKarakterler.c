/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde özel karakterler
*/

#include <stdio.h>

int main() {
  char metin1[] = "Merhaba\nDünya!";
  printf("%s", metin1);
  printf("\n...\n");

  char metin2[] = "Merhaba\tDünya!";
  printf("%s", metin2);
  printf("\n...\n");
  
  char metin3[] = {'M','e','r','h','a','b','a','\0'};
  printf("%s", metin3);
  printf("\n...\n");

  char metin4[] = "Öğretmen içeri girince \"Günaydın\" diye seslendi.";
  printf("%s", metin4);
  printf("\n...\n");
 
  char metin5[] = "Ahmet\'in telefonu hiç susmuyordu.";
  printf("%s", metin5);
  printf("\n...\n");

  char metin6[] = "\\ karakteri ters taksim veya backslash olarak anılır.";
  printf("%s", metin6);
  printf("\n...\n");
  
  return 0;
}