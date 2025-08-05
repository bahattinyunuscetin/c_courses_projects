#include <stdio.h>
#include <stdlib.h>

int main()
{
//   int number, squareroot;
//
//    printf("enter a positive number:");
//    scanf("%d",&number);
//    if(number<0){
//        printf("please do not this \n");
//
//    }else{
//    squareroot=sqrt(number);
//    if(squareroot*squareroot == number){
//        printf("square root of %d is an integer\n");
//
//    }else{
//    printf("no it is not\n");
//    }
//
//
//        float talktime,fee;
//         printf("phone talk time:");
//         scanf("%f",&talktime);
//
//         if(talktime <=4.0){
//            fee=0.30;
//         }else{
//         fee=0.30+(talktime-4)*0.07;
//
//         }
//         printf("fee:%.3f tl\n",fee);

    int angle1,angle2,angle3;
    printf("enter three angles:");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3 != 180){
        printf("this is an equilateral triangle\n");
    }else if (angle1 == angle2 || angle2==angle3 || angle1==angle3){
    printf("this is an isosceles triangle\n");
    }

      return 0;

    }








