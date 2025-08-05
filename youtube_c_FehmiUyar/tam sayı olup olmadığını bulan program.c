#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number, squareroot;

    printf("enter a positive number:");
    scanf("%d",&number);
    if(number<0){
        printf("please do not this \n");

    }else{
    squareroot=sqrt(number);
    if(squareroot*squareroot == number){
        printf("square root of %d is an integer\n");

    }else{
    printf("no it is not\n");
    }



    }







    return 0;
}
