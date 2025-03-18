#include <stdio.h>
#include <stdlib.h>

int main()
{
 int upperlimit,i,j,sum;
 printf("hangi sayıya kadar olan mukemmel sayılar listelensin?");
 scanf("%d",&upperlimit);

 for(i=1;i<=upperlimit;i++){
 sum=0;
 for(j=1;j<=i/2;j++){
 if(i%j==0)
    sum+=j;
}
if(sum==i){
printf("%d mukemmel sayıdır\n",i);


}

}
return 0;
}

