#include <stdio.h>
#include <stdlib.h>

int main()
{
    float odenecekfatura,eskibirimfiyat,yenibirimfiyat;
    float enflasyon,eskiaboneucreti,yeniaboneucreti;
    int yeniokuma,eskiokuma,toplamharcananelektrik;
    printf("enflasyon oranini girin:");
    scanf("%f",&enflasyon);
    printf("onceki aya ait birim fiyatini girin:");
    scanf("%f",&eskibirimfiyat);
    printf("onceki aya ait abonelik girin:");
    scanf("%f",&eskiaboneucreti);
    printf("bir onceki aya ait okuma degerini girin:");
    scanf("%d",&eskiokuma);
    printf("bu aya ait okuma degerini girin:");
    scanf("%f",&yeniokuma);
    toplamharcananelektrik=yeniokuma-eskiokuma;
    yenibirimfiyat=eskibirimfiyat*(1+enflasyon/100);
    yeniaboneucreti=eskiaboneucreti*(1+enflasyon/100);
    odenecekfatura=toplamharcananelektrik*yenibirimfiyat+yeniaboneucreti;
    printf("\nodeyeceginiz fatura tutarý : %f\n\n",odenecekfatura);


     return 0;
}
