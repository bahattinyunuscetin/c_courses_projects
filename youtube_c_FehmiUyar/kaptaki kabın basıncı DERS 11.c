#include <stdlib.h>
#include <stdio.h>

int main()
{
    float pressure,constantR;
    int numberofmoles,volume,heat;
    constantR=0.82;

    printf("kabin hacmini giriniz:\n");
    scanf("%d",&volume);
    printf("kabdaki mol sayisini giriniz:\n");
    scanf("%d",&numberofmoles);
    printf("ortam sicakligini giriniz:\n");
    scanf("%d",&heat);

    pressure=(numberofmoles*constantR*heat)/volume;
    printf("%d hacimli kaptaki gazýn basýnci:%f\n\n\n",volume, pressure);

    return 0;
}
