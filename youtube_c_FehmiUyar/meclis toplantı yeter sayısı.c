#include <stdio.h>
#include <stdlib.h>

int main()
{
    int partya,partyb,partyc,currentcouncilor;
    const int sumcouncilor=600;
    printf("meclisdeki partilerin say�lar�n� girin:");
    scanf("%d%d%d",&partya,&partyb,&partyc);

    currentcouncilor=partya+partyb+partyc;
    if(currentcouncilor<sumcouncilor/2){
       printf("gerekli toplant� yeter say�s� bulunamad���ndan toplant�ya ara verildi\n");
       printf("toplant� yeter say�s� %d'dur\n",sumcouncilor/2);


    }else{
    printf("meclis toplant�ya haz�r\n");
    }

    return 0;
}
