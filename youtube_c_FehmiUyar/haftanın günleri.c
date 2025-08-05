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
//
//    int angle1,angle2,angle3;
//    printf("enter three angles:");
//    scanf("%d%d%d",&angle1,&angle2,&angle3);
//    if(angle1+angle2+angle3 != 180){
//        printf("this is an equilateral triangle\n");
//    }else if (angle1 == angle2 || angle2==angle3 || angle1==angle3){
//    printf("this is an isosceles triangle\n");
//    }

    //      char mycharacter;
    //
    //      printf("enter a chracter:");
    //      scanf("%c",&mycharacter);
    //
    //      if ((mycharacter>='A') && (mycharacter<='Z')){
    //        printf("%c is an uppercase letter \n",mycharacter);
    //
    //      }else if ((mycharacter>='a') && (mycharacter<='z')){
    //        printf("%c is an uppercase letter \n",mycharacter);
    //        }else{
    //        printf("%c is not a letter \n",mycharacter);
    //        }
    int numberofproducts,day;
    char *dayname;
    numberofproducts=0;
    day=0;

    printf("enter a number of day (1-7):");
    scanf("%d",&day);
    switch(day){
    case 7 : numberofproducts+=25;
            if(day=7){dayname="sunday";}
        case 6 : numberofproducts+=19;
            if(day=6){dayname="saturday";}
    case 5 : numberofproducts+=15;
            if(day=5){dayname="friday";}
    case 4 : numberofproducts+=10;
            if(day=4){dayname="thursday";}
    case 3 : numberofproducts+=7;
            if(day=3){dayname="wendesday";}
    case 2 : numberofproducts+=5;
            if(day=2){dayname="thusday";}
    case 1 : numberofproducts+=2;
            if(day=1){dayname="monday";}


    }
    printf("%s gunu sonunda toplam %d urun satisi yapilmistir\n\n",dayname,numberofproducts);








      return 0;

    }








