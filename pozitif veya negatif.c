#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mynumber;
    printf("enter a number:");
    scanf("%d",&mynumber);
    if(mynumber>0){
        if(mynumber == 100){
            printf("it is incredible\n\n");

        }else{
        printf("it is not incredible\n\n");

        }
        printf("the value a positive number\n\n");
    }else if(mynumber<0){
    printf("the value is a negative number");

    }else{
        printf("your number is 0\n\n");
    }






    return 0;
}
