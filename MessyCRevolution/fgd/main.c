#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y,obeb=0,okek=0,smallnumber;

 printf("obeb'i ve okek'i bulunacak iki sayý girin:");
 scanf("%d%d",&x,&y);
 if(x<y)
    smallnumber=x;
 else
    smallnumber=y;
 for(int i=2;i<=smallnumber;i++){
    if((x%i==0)&&(y%i==0))
    obeb=i;
    }
    if(obeb != 0){
        okek=obeb*x/obeb*y/obeb;
        printf("%d ve %d sayýlarýnýn obeb'i:%d\n",x,y,obeb);
        printf("%d ve %d sayýlarýnýn okek'i:%d\n",x,y,okek);

    }else{
    okek=x*y;
    printf("bu sayýlarýn obeb'i yoktur\n");
    printf("%d ve %d sayýlarýnýn okek'i :%d\n",x,y,okek);
    }
return 0;
}
