#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    while(i<=10){
        if(i==6){
            i++;
            continue;
        }
        printf("%d\n",i);
        i++;
    }


    return 0;
}
