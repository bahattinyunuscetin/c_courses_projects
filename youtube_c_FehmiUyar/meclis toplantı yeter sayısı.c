#include <stdio.h>
#include <stdlib.h>

int main()
{
    int partya,partyb,partyc,currentcouncilor;
    const int sumcouncilor=600;
    printf("meclisdeki partilerin sayýlarýný girin:");
    scanf("%d%d%d",&partya,&partyb,&partyc);

    currentcouncilor=partya+partyb+partyc;
    if(currentcouncilor<sumcouncilor/2){
       printf("gerekli toplantý yeter sayýsý bulunamadýðýndan toplantýya ara verildi\n");
       printf("toplantý yeter sayýsý %d'dur\n",sumcouncilor/2);


    }else{
    printf("meclis toplantýya hazýr\n");
    }

    return 0;
}
