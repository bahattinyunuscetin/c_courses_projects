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
        //nokta y� g�rene kadar c�mleyi dizinin i�ine �ekiyor
        countcharacters(x,y);
        for(i=0;i<26;i++){
            printf("%c/%c: %d\n",'A'+i,'a'+i,y[i]);
            }
            return 0;
            //for d�ng�s� alfabenin listesini ��kar�yor ve fonsiyonla hesaplanan ve y diizsinin i�inde �retilen verileri yazd�r�yor
}
void  countcharacters(char x[],int y[]){
    int i,j;
    for(i=0;i<26;i++){ // bunun amac� y yi 0 lamak
        y[i]=0;
    }
    for(i=0;x[i]!='.';i++){ // noktay� g�rene kadar diziyi oku
        if(x[i]>='A' && x[i]<='Z')
            y[(int)x[i]-(int)'A']++; // e�er b�y�k harfse y deki o harfe denk gelen de�eri bir artt�r
        if(x[i]>='a' && x[i]<='z')
            y[(int)x[i]-(int)'a']++;
            }
}
