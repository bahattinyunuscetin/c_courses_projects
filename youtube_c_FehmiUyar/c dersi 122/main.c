#include <stdio.h>
#include <stdlib.h>

int main()
{
  int first,second,third,i,number;
  first=1;
  second=1;
  third=1;
  printf("enter a number:");
  scanf("%d",&number);
  printf("1 1 ");
  for(i=1;i<=number;i++){
    first=second;
    second=third;
    third=first+second;
    if(i<=number-2)
        printf("%d ",third);

  }
  printf("\n\n%d. eleman :%d\n",i-1,first);


return 0;

}


