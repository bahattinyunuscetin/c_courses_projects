#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int number1,number2;
    printf("enter two numbers");
    scanf("%d%d",&number1,&number2);

    printf("%d uzeri %d: %.2f\n",number1,number2,pow(number1,number2));
return 0;
}

