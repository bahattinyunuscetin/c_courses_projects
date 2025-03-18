#include <stdio.h>
#include <stdlib.h>
int celtofah(int);
int fahtocel(int);
int main()
{
char choose;
int number;
printf("fahrenheit ->celcius için c\n");
printf("celsius->fahrenheit icin f\n");
printf("seciminizi girin:");
scanf("%c",&choose);
switch(choose){
case 'c' :printf("fahrenhiet deðerini girin:");
scanf("%d",&number);
printf("celcius deðeri:%d\n",fahtocel(number));
break;
case 'f' :printf("celsius deðerini girin:");
scanf("%d",&number);
printf("fahrenheit deðeri:%d\n",celtofah(number));
break;
default:printf("yanlýs deger");
}
return 0;
}
int celtofah(int c){
return(c*9/5+32);
}
int fahtocel(int f){
return((f-32)*5/9);
}
