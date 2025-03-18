#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,number;
    number=0;
    i=1;

    printf("enter a number from 1 to 10:");
    scanf("%d",&number);

    if(number<1 || number>10){
        printf("please do not that\n");
        return 0;
        }
     while(i<=10){
        printf("%d x %d = %d\n",number,i,number*i);
        i++;

     }
    return 0;
}
