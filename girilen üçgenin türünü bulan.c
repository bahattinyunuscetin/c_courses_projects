#include <stdio.h>
#include <stdlib.h>

int main()
{
    char longestside,a,b,c;

    printf("enter the side lengths of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        longestside='a';
    }else if(b>a && b>c){
      longestside='b';
      }else{
      longestside='c';
      }

    if(longestside == 'a'){
        if(a*a == b*b + c*c){
            printf("dik acýýlý üçgen\n");
        }else if(a*a>b*b+c*c){
        printf("geniþ açýlý ücgen\n");
        }else if(a*a<b*b+c*c){
        printf("dar açýlý üçgen\n");
        }else{
        printf("girilen kenarlar bir ücgen oluþturmaz\n");
        }
    }else if(longestside=='b'){
            if(b*b == a*a + c*c){
            printf("dik acýýlý üçgen\n");
        }else if(b*b>a*a+c*c){
        printf("geniþ açýlý ücgen\n");
        }else if(b*b<a*a+c*c){
        printf("dar açýlý üçgen\n");
        }else{
        printf("girilen kenarlar bir ücgen oluþturmaz\n");
        }
    }else {
        if(c*c == b*b + a*a){
            printf("dik acýýlý üçgen\n");
        }else if(c*c>b*b+a*a){
        printf("geniþ açýlý ücgen\n");
        }else if(c*c<b*b+a*a){
        printf("dar açýlý üçgen\n");
        }else{
        printf("girilen kenarlar bir ücgen oluþturmaz\n");
        }
    }








    return 0;


    }


