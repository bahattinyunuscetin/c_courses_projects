/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde recursion yani özyineleme örneği
 * faktöryel hesaplama uygulaması
*/

#include <stdio.h>
int FaktoryelHesapla(int n);

int main() {
  
  int deger = 7;
  printf("%d! = %d \n", deger, FaktoryelHesapla(deger));
    
  return 0;
}

int FaktoryelHesapla(int n){
  int f;
  if(n==1)
    f=1;
  else
    f = n * FaktoryelHesapla(n-1);
  return f;
}