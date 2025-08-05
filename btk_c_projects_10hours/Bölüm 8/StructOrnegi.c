/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde struct'lar
*/

#include <stdio.h>

// PersonelBilgisi isimli bir struct oluştur
struct PersonelBilgisi {
  int Yas;
  float Maas;
  char Isim[30];
  char Cinsiyet[8];
};

int main() {
  // PersonelBilgisi yapısında, Personel1 isimli bir değişken tanımla 
  struct PersonelBilgisi Personel1;

  // Personel1'in alanlarına değer ata
  // Personel1.Isim = "Ahmet Ahmetoğlu"; böyle yazarsak hata alırız
  strcpy(Personel1.Isim, "Ahmet Ahmetoğlu");
  // Personel1.Cinsiyet = "Erkek"; böyle yazarsak hata alırız
  strcpy(Personel1.Cinsiyet, "Erkek");
  Personel1.Yas = 34;
  Personel1.Maas = 8500;

  // Personel1 struct'ının değerlerini yazdır
  printf("Personelin Adı: %s\n", Personel1.Isim);
  printf("Personelin Cinsiyeti: %s\n", Personel1.Cinsiyet);
  printf("Personelin Yaşı: %d\n", Personel1.Yas);
  printf("Personelin Maaşı: %lf\n", Personel1.Maas);

  printf("\n................................\n");

  // Yeni bir personel tanımla (alternatif bir tanımlama yöntemi)
  struct PersonelBilgisi Personel2 = {33, 8800, "Ayşe Ayşeoğlu", "Kadın"};
  
  // Personel2 struct'ının değerlerini yazdır
  printf("Personelin Adı: %s\n", Personel2.Isim);
  printf("Personelin Cinsiyeti: %s\n", Personel2.Cinsiyet);
  printf("Personelin Yaşı: %d\n", Personel2.Yas);
  printf("Personelin Maaşı: %lf\n", Personel2.Maas);

  printf("\n................................\n");

  struct PersonelBilgisi Personel2Kopyasi;
  // Personel2'nin bilgilerini yeni bir yapıya kopyala
  Personel2Kopyasi = Personel2;
  // Personel2Kopyasi struct'ının değerlerini yazdır
  printf("Personelin Adı: %s\n", Personel2Kopyasi.Isim);
  printf("Personelin Cinsiyeti: %s\n", Personel2Kopyasi.Cinsiyet);
  printf("Personelin Yaşı: %d\n", Personel2Kopyasi.Yas);
  printf("Personelin Maaşı: %lf\n", Personel2Kopyasi.Maas);

  return 0;
}