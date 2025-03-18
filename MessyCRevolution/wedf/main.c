#include <stdio.h>
#include <stdlib.h>



    int main()
{

    int number1,number2,number3,max,min
   printf("enter three number:");
   scanf("%d%d%d",&number1,&number2,&number3);
    if(number1>number2 && number1>number3){
        max=number1;
    }else if(number2>number1 && number2>number3){
    max=number2;
    }else{
    max=number3;
    }
     if(number1<number2 && number1<number3){
        min=number1;
     }else if (number2<number1 && number2<number3){
            min=number2;
            }else{min=number3;
            }
        printf("the largest number:%d\n",max);
        printf("the least number:%d\n\n",min);
    return 0;
}



