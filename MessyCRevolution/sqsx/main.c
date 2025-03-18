#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,sharp=0;

  printf("enter the number of sharps:");
  scanf("%d",&sharp);
  for(i=1;i<=sharp;i++){
    for(j=1;j<=i;j++){
        printf("#");
    }
    printf("\n");
  }
    for(i=1;i<=sharp;i++){
        for(j=i;j<=sharp;j++){
            printf("%d",j);
        }
        printf("\n");
    }
return 0;
}

