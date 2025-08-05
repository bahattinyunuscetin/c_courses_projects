/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde continue komutunun işleyişi
 * while döngüsünün içerisinde
*/

#include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 10) {
    if (i == 4) {
      continue;
    }
    printf("%d\n", i);
    i++;
  } 
  
  return 0;
}