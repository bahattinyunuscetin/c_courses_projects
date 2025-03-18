#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,sharp=0;

  printf("enter the sharp number:");
  scanf("%d",&sharp);
  for(i=1;i<=sharp;i++){
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
  printf("\n");

  }
  for(i=1;i<=sharp;i++){
    for(j=1;j<=sharp-i;j++){
        printf("%d",j);
    }
  printf("\n");
  }
    return 0;

}

