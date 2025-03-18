#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myoperator;
    float number1,number2;
    printf("choose operator (+,-,*,/):");
    scanf("%c",&myoperator);


    printf("enter two numbers:");
    scanf("%f%f",number1,number2);

    printf("\n operator=%c\n number1=%f\n number2=%f\n",myoperator,number1,number2);

    switch(myoperator){
    case '/':printf("%f",number1/number2); break;
    case '*':printf("%f",number1*number2); break;
    case '+':printf("%f",number1+number2); break;
    case '-':printf("%f",number1-number2); break;
   default: printf("you entered the wrong operator\n\n");
   }

    return 0;
}
