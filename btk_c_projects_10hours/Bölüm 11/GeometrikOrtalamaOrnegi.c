/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde geometrik ortalama örneği
*/

#include <stdio.h>
#include <math.h> // pow fonksiyonu için

int main() {
  int sayilarin_adedi, sayac = 0;
  double carpim = 1.0;
  printf("Kaç adet sayı gireceğinizi belirtiniz: ");
  scanf("%d",&sayilarin_adedi);

  double girilen_son_sayi;
  while((sayac<sayilarin_adedi))
  {
    printf("Gerçel bir sayı giriniz: ");
    scanf("%lf",&girilen_son_sayi);
    sayac = sayac+1; // sayac += 1 veya sayac++ da diyebilirdik
    carpim = carpim * girilen_son_sayi;  // carpim *= girilen_son_sayi da diyebilirdik
  }

  double geometrik_ortalama = pow(carpim, 1.0/sayilarin_adedi);
  printf("Sayıların Geometrik Ortalaması: %lf", geometrik_ortalama);
  
  return 0;
}