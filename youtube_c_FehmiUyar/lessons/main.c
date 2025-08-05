#include <stdio.h>
#include <stdlib.h>

int main()
{
//    char myletter ='7';
//    float mynumber2=2.56;
//    double myNuber2=213.568;
//    int mynumbeR=6164313;
//
//    printf("size char :%d\n",sizeof(char));
//    printf("size int :%d\n",sizeof(char));
//    printf("size float :%d\n",sizeof(float));
//    printf("size double :%d\n",sizeof(double));
//    int yournumber,yournumber2,yournumber3,sum,extraction,multiplication,division;
//    yournumber=yournumber2=yournumber3=3,
//    sum=yournumber + yournumber2 + yournumber3;
//    extraction=yournumber-yournumber2;
//    multiplication=yournumber*yournumber2;
//    division=yournumber/yournumber2;
//    printf("sum: %d\n",sum);
//    printf("%d\n",yournumber);
//    float yournumber5;
//    yournumber5=5.5,
//    printf("%f\n",yournumber5);
//    printf("toplama: %d\n",sum);
//    printf("çýkarma: %d\n",extraction);
//    printf("çarpma %d\n",multiplication);
//    printf("bölme %d\n",division);
//    int ournumber,ournumber2;
//    printf("enter two number:");
//    scanf("%d%d",&ournumber,&ournumber2);
//    printf("the number you entered is %d - %d",ournumber,ournumber2);
//
//    /*
//    DAÝRENÝN ÇEVRESÝNÝ VE ALANINI BULAN PROGRAM
//    1-ihtiyacýmýz olan variables bul ve tanýmla
//    2-variables type bul
//    3-formülü tanýmla alan=pi*r*r çevre=2*pi*r
//    4-kullanýcýdan verileri al
//    5-iþlem yap
//    6-çýktý ver
//
//    */
//    float r,circumference,area;
//    const float PI=3.1415;
//    printf("enter the radius of the circle");
//    scanf("%f",&r);
//    circumference=2*PI*r;
//    area=PI*r*r;
//    printf("circumference of the circle:%f\n",circumference);
//    float mynumber1,mynumber2,mynumber3,mynumber4;
//    mynumber1=0.0;
//    mynumber2=0.0;
//    mynumber3=0.0;
//    mynumber4=0.0;
//
//    printf("enter four numbers:");
//    scanf("%f%f%f%f",&mynumber1,&mynumber2,&mynumber3,&mynumber4);
//
//    printf("the number\t\t");
//    printf("square of  number\t\t");
//    printf("cube of number\t\t\n");
//
//    printf("-------------\t\t");
//    printf("-------------\t\t");
//    printf("-------------\t\t\n");
//
//    printf("%f\t\t",mynumber1);
//    printf("%f\t\t",mynumber1*mynumber1);
//    printf("%f\t\t\n",mynumber1*mynumber1*mynumber1);
//
//    printf("%f\t\t",mynumber2);
//    printf("%f\t\t",mynumber2*mynumber2);
//    printf("%f\t\t\n",mynumber2*mynumber2*mynumber2);
//
//
//    printf("%f\t\t",mynumber3);
//    printf("%f\t\t",mynumber3*mynumber3);
//    printf("%f\t\t\n",mynumber3*mynumber3*mynumber3);
//
//
//    printf("%f\t\t",mynumber4);
//    printf("%f\t\t",mynumber4*mynumber4);
//    printf("%f\t\t\n",mynumber4*mynumber4*mynumber4);
//
//
//    printf("\n\n");


//    int mynumber;
//    mynumber=7;
//    printf("%d\n",mynumber);
//    printf("++mynumber:%d\n",++mynumber);
//    printf("mynumber++:%d\n",mynumber++);
//    printf("mynumber:%d?n",mynumber);


    int mynumber,bolum,kalan,sum;sum=0;
    printf("enter a 4 digit number");
    scanf("%d"),mynumber;
    //4. basamağı bul
    bolum=mynumber/1000;
    sum += bolum;
    kalan= mynumber%1000;
    //3.basamağı bul
    bolum=kalan/100;
    sum += bolum;
    kalan = kalan%100;
    //2.basamağı bul
    bolum=kalan/10;
    sum += bolum;
    kalan=kalan%10;
    //1.basamağı bul
    sum += kalan;
    printf("the sum of the digits of the number you entered:%d",sum);









    return 0;


}



