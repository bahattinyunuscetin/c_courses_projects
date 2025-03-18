#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct mydate{
int day;
int month;
int year;
};
int main()
{
    struct mydate x;
    struct mydate y;

    printf("enter your date of birth:");
    scanf("%d%d%d",&x.day,&x.month,&x.year);

    printf("enter today's date :");
    scanf("%d%d%d",&y.day,&y.month,&y.year);
     if(x.day>y.day){
        y.day+=30;
        y.month-=1;
    }
    if(x.month>y.month){
        y.month+=12;
        y.year-=1;
    }
    printf("\n you have lived ");
    printf("%d day, %d month, %d year ",y.day-x.day,y.month-x.month,y.year-x.year);
    printf("till now");
    return 0;
}
