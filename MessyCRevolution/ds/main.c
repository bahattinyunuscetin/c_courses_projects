#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,number;
printf("enter a number value:");
scanf("%d",&number);
for (i=1;i<=number;i++){
    for(j=1;j<=number-i;j++){
        printf("  ");
            }
            for(j=1;j<=i*2-1;j++){
                printf("* ");
            }

    printf("\n");

    }
    for (i=1;i<=number;i++){
    for(j=1;j<=i;j++){
        printf("  ");
            }
            for(j=1;j<=number*2-1-(i*2);j++){
                printf("* ");
            }

    printf("\n");

    }
return 0;

}






