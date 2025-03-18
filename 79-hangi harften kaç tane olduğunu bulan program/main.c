#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void countcharacters(char x[],int y[]);
int main()
{   char x[100];
    int y[26],i=0;
    printf("enter a sentence");
    do{
        scanf("%c",&x[i]);
        i++;
        }while(x[i-1] != '.');
        //nokta yý görene kadar cümleyi dizinin içine çekiyor
        countcharacters(x,y);
        for(i=0;i<26;i++){
            printf("%c/%c: %d\n",'A'+i,'a'+i,y[i]);
            }
            return 0;
            //for döngüsü alfabenin listesini çýkarýyor ve fonsiyonla hesaplanan ve y diizsinin içinde üretilen verileri yazdýrýyor
}
void  countcharacters(char x[],int y[]){
    int i,j;
    for(i=0;i<26;i++){ // bunun amacý y yi 0 lamak
        y[i]=0;
    }
    for(i=0;x[i]!='.';i++){ // noktayý görene kadar diziyi oku
        if(x[i]>='A' && x[i]<='Z')
            y[(int)x[i]-(int)'A']++; // eðer büyük harfse y deki o harfe denk gelen deðeri bir arttýr
        if(x[i]>='a' && x[i]<='z')
            y[(int)x[i]-(int)'a']++;
            }
}
