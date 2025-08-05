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
     printf("telefon numarasý baþarýlý bir þekilde eklendi");
     }else{printf("telefon numarasý baþarýlý bir þekilde eklenemedi");}

        break;
     case 2:if(phonelist() == 0){
     printf("telefon numarasý baþarýlý bir þekilde listelendidi");
     }else{printf("telefon numarasý baþarýlý bir þekilde listelenemedi");}
         break;
     case 3:printf("\naranacak ismi giriniz:");
     scanf("%s",&searchname);
     searchresult=phonesearch(searchname);
     if(searchresult == 0){
        printf("\naranýlan kayýt bulunamadý\n");

     }else{
     printf("\n toplam %d kayýt bulundu\n",searchresult);
     }

      break;
     case 4:printf("\n cýkýþ yaptýnýz. hosca kalýn\n");
     return 0;
     break;
     default:printf("\nlutfen 1-4 arasýnda secim yapiniz\n");
     }

 }while(choice!=4);
 return 0;
}
