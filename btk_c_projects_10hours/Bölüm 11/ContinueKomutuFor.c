/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde continue komutunun işleyişi
*/

#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) 
  {
    if (i == 5) 
	{
      continue;
    }
    printf("%d\n", i);
  }
   
  return 0;
}