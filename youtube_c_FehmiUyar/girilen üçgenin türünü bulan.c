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
            printf("dik ac��l� ��gen\n");
        }else if(a*a>b*b+c*c){
        printf("geni� a��l� �cgen\n");
        }else if(a*a<b*b+c*c){
        printf("dar a��l� ��gen\n");
        }else{
        printf("girilen kenarlar bir �cgen olu�turmaz\n");
        }
    }else if(longestside=='b'){
            if(b*b == a*a + c*c){
            printf("dik ac��l� ��gen\n");
        }else if(b*b>a*a+c*c){
        printf("geni� a��l� �cgen\n");
        }else if(b*b<a*a+c*c){
        printf("dar a��l� ��gen\n");
        }else{
        printf("girilen kenarlar bir �cgen olu�turmaz\n");
        }
    }else {
        if(c*c == b*b + a*a){
            printf("dik ac��l� ��gen\n");
        }else if(c*c>b*b+a*a){
        printf("geni� a��l� �cgen\n");
        }else if(c*c<b*b+a*a){
        printf("dar a��l� ��gen\n");
        }else{
        printf("girilen kenarlar bir �cgen olu�turmaz\n");
        }
    }








    return 0;


    }


