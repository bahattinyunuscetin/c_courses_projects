/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde break komutunun işleyişi
 * while döngüsünün içerisinde
*/

#include <stdio.h>

int main() {
  int i;
  
  i = 0;
  while (i < 10) {
    if (i == 5) {
      break;
    }
    printf("%d\n", i);
	i++;
  }
   
  return 0;
}