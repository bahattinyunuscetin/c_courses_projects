/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde enumerated type'lar
 * yani numaralandırılmış tipler
*/

#include <stdio.h>

enum Seviyeler {
  DUSUK,
  ORTA,
  YUKSEK
};
  
int main() {
  // numaralandırılmış tipte bir değişken tanımla
  // ve değer ata
  enum Seviyeler OdaSicakliği = ORTA;
 
  // numaralandırılmış tipteki değişkeni yazdır
  printf("%d", OdaSicakliği);
  
  return 0;
}