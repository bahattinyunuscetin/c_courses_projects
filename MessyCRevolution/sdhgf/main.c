#include <stdio.h>
#include <stdlib.h>
int celtofah(int);
int fahtocel(int);
int main()
{
char choose;
int number;
printf("fahrenheit ->celcius i�in c\n");
printf("celsius->fahrenheit icin f\n");
printf("seciminizi girin:");
scanf("%c",&choose);
switch(choose){
case 'c' :printf("fahrenhiet de�erini girin:");
scanf("%d",&number);
printf("celcius de�eri:%d\n",fahtocel(number));
break;
case 'f' :printf("celsius de�erini girin:");
scanf("%d",&number);
printf("fahrenheit de�eri:%d\n",celtofah(number));
break;
default:printf("yanl�s deger");
}
return 0;
}
int celtofah(int c){
return(c*9/5+32);
}
int fahtocel(int f){
return((f-32)*5/9);
}
