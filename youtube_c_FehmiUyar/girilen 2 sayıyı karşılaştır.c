#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number1,number2;
  number1=0;
  number2=0;
    printf("enter a two number");
    scanf("%d%d",&number1,&number2);
    if(number1>number2){

        printf("number1 is greater than number2 variable");

    }else if(number2>number1){
            printf("number2 is greater than number1 variable");

    }else{
    printf("number1 is equal number2 variable\n");
    }



    return 0;
}
