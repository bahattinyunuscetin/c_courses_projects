#include <stdio.h>
#include <stdlib.h>
int factorial (int);
int main()
{
   int number;
   printf("enter a number:");
   scanf("%d",&number)
   printf("%d!=%d\n",number,factorial(number));

}
int factorial(int x){
if(x==0)
    return 1;
else
    return x*factorial(x-1);
}
