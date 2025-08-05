/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde Boolean değişkenler
*/

#include <stdio.h>
#include <stdbool.h>  // Boolean işlemler kütüphanesi 

int main() {
  bool ProgramcilikGuzelMi = true;
  bool TembellikIyiMi = false;
  printf("%d\n", ProgramcilikGuzelMi);  // 1 (true) döndürecek
  printf("%d\n", TembellikIyiMi);       // 0 (false) döndürecek 
  printf("\n...\n"); 

  printf("%d\n", 10 > 9);  // 1 (true) döndürecek çünkü 10, 9'dan büyüktür  
  
  int x = 10;
  int y = 9;
  printf("%d\n", x > y); // 1 (true) döndürecek çünkü 10, 9'dan büyüktür
  printf("\n...\n"); 
  
  printf("%d\n", 10 == 10); // 1 (true) döndürecek çünkü 10, 10'a eşittir
  printf("%d\n", 10 == 15); // 0 (false) döndürecek çünkü 10, 15'e eşit değildir
  printf("%d\n", 5 != 55);  // 1 (true) döndürecek çünkü 5, 55'e eşit değildir
  return 0;
}