#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"
#include "menu.h"
#include "phoneadd.h"
#include "phonelist.h"
#include "phonesearch.h"


int main()
{
 int choice=0;
 char searchname[20];
 int searchresult=0;
 menu();
 do{
     printf("\n\n seciminizi giriniz:");
     scanf("%d",&choice);
     switch(choice){
     case 1:if(phoneadd() == 0){
     printf("telefon numaras� ba�ar�l� bir �ekilde eklendi");
     }else{printf("telefon numaras� ba�ar�l� bir �ekilde eklenemedi");}

        break;
     case 2:if(phonelist() == 0){
     printf("telefon numaras� ba�ar�l� bir �ekilde listelendidi");
     }else{printf("telefon numaras� ba�ar�l� bir �ekilde listelenemedi");}
         break;
     case 3:printf("\naranacak ismi giriniz:");
     scanf("%s",&searchname);
     searchresult=phonesearch(searchname);
     if(searchresult == 0){
        printf("\naran�lan kay�t bulunamad�\n");

     }else{
     printf("\n toplam %d kay�t bulundu\n",searchresult);
     }

      break;
     case 4:printf("\n c�k�� yapt�n�z. hosca kal�n\n");
     return 0;
     break;
     default:printf("\nlutfen 1-4 aras�nda secim yapiniz\n");
     }

 }while(choice!=4);
 return 0;
}
