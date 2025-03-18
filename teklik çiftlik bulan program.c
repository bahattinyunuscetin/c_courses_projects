#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mynumber;
     printf("enter a number:");
     scanf("%d",&mynumber);

     if(mynumber%2 == 0)
        printf("%d is a even number\n",mynumber);
        else
            printf("%d is an odd number\n",mynumber);

    return 0;
}
