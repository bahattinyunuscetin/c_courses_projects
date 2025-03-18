#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const int numbers[]={1,2,34};
    printf("%d",sizeof(numbers)/sizeof(numbers[1]));
return 0;
}

