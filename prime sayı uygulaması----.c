#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i
    number=0;
    i=2;

    printf("enter a positive number:");
    scanf("%d",&number);

    if(number<0){
        printf("please enter a positive number\n");
        return 0;
    }
    while(i< number/2){
        if(number%i == 0){
            printf("%d divided by %d so it can not be a prime number",number,i);
            return 0;
        }
        i++;
    }
    printf("%d is a prime number",number);
    return 0;
}
 be
