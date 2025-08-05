#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int score;
//    printf("enter a score:");
//    scanf("%d",&score);
//    if(score>=60){
//        printf("congratulations you passed the exam\n");
//        printf("you score:%d\n\n\n",score);
//
//    }else{
//        printf("unfortunately yo did not pass the exam\n\n");
//
//    }
//    return 0;
//}
//
int main ()
{
    int mynumber ;
    printf("enter a number:");
    scanf("%d",&mynumber);
    if(mynumber>0){
        printf("the value is a positive number");
        }else if(mynumber<0){
        printf("the value is a negative number");
        }else{
        printf("your numberis0");
        }

    return 0;
}
