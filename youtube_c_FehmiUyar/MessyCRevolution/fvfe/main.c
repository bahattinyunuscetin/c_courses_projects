#include <stdio.h>
#include <stdlib.h>
#include "mymath.h"



 int main()
 {
  int choose=0,x,y;
  menu();
 printf("\nchoose a number (1-5):");
 scanf("%d",&choose);
 printf("\n");
 switch(choose){
 case 1:printf ("enter two numbers:");
 scanf("%d%d",&x,&y);
 printf("min:%d\n",min(x,y));
     break;
 case 2:printf ("enter two numbers:");
 scanf("%d%d",&x,&y);
 printf("max:%d\n",max(x,y));
     break;
     case 3:printf ("enter a number:");
 scanf("%d",&x);
 printf("square:%d\n",square(x));
     break;
     case 4:printf ("enter a number:");
 scanf("%d",&x);
 printf("cube:%d\n",cube(x));
     break;
     case 5:printf ("enter a number:");
 scanf("%d",&x);
 printf("absolute value:%d\n",absolute(x));
     break;
 default:printf("\nyou should have xhoosen a number between 1 and 5 |\n");

 }
    return 0;
}
void menu(){
 printf("\n");
 printf("**********\n");
 printf("*  MENU   *\n");
 printf("***********\n\n");
 printf("1-minimum\n");
 printf("2-maksimum\n");
 printf("3-kare al\n");
 printf("4-kup al\n");
 printf("5-mutlak deger\n");
}
int min(int x, int y){
 if(x<y){
    return x;

 }else{
 return y;
 }

}

int max (int x, int y){
if(x>y){
    return x;

}else{
return y;

}
}
int square(int x){
return x*x;
}
int cube (int x){
return x*x*x;

}
int absolute(int x){
if(x<0){
    return x*(-1);

}else{
return x;
}
}
