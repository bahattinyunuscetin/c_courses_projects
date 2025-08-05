/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde string'ler üzerinde
 * işlem yapma
*/


#include <stdio.h>

int main() {
  char karsilama_mesaji1[] = "Merhaba!";
  char karsilama_mesaji2[] = {'M','e','r','h','a','b','a','!','\0'};
  
  printf("%lu\n", sizeof(karsilama_mesaji1));
  printf("\n...\n");
  printf("%lu\n", sizeof(karsilama_mesaji2));

  return 0;
}