#include <stdio.h>
#include <stdlib.h>

int main()
{
 int upperlimit,i,j,sum;
 printf("hangi say�ya kadar olan mukemmel say�lar listelensin?");
 scanf("%d",&upperlimit);

 for(i=1;i<=upperlimit;i++){
 sum=0;
 for(j=1;j<=i/2;j++){
 if(i%j==0)
    sum+=j;
}
if(sum==i){
printf("%d mukemmel say�d�r\n",i);


}

}
return 0;
}

