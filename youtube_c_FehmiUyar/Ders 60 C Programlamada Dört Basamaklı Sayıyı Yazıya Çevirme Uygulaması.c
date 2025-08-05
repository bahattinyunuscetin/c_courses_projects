#include <stdio.h>
#include <stdlib.h>
void birlikcevir(int);
void onlukcevir(int);

int main()
{
 int number ,d1,d2,d3,d4;
 while(number!=-1){
        printf("enter a four digit number:");
 scanf("%d",&number);
 if(number==-1)break;
 d1=number%10; //birler
 d2=(number%100)/10; //onlar
 d3=(number%1000)/100; //yüzler
 d4=number/1000; //binler
 if(d4!=1) birlikcevir(d4);
 printf(" bin ");
 if(d3!=1) birlikcevir(d3);
 if(d3!=0) printf(" yuz ");
 onlukcevir(d2);
 printf(" ");
 birlikcevir(d1);
 printf("\n\n");
 }

 return 0;
}
void birlikcevir(int number){
switch(number){
case 1:printf("bir");break;
case 2:printf("iki");break;
case 3:printf("üç");break;
case 4:printf("dört");break;
case 5:printf("beþ");break;
case 6:printf("altý");break;
case 7:printf("yedi");break;
case 8:printf("sekiz");break;
case 9:printf("dokuz");break;
}
}
void onlukcevir(int number){
switch(number){
case 1:printf("on");break;
case 2:printf("yirmi");break;
case 3:printf("otuz");break;
case 4:printf("kýrk");break;
case 5:printf("elli");break;
case 6:printf("altmýþ");break;
case 7:printf("yetmiþ");break;
case 8:printf("seksen");break;
case 9:printf("doksan");break;



}
}
