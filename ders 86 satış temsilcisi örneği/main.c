#include <stdio.h>
#include <stdlib.h>
int i,j,k;

int main()
{
    readsales();
    writesales();
    return 0;
}
void readsales(){
for(i=0;i<3;i++){
    printf("%d. sat�� temsilcisi:\n",i+1);
    for(j=0;j<2;j++){
        if(j==0) printf("\tmatematik kitab�\n");
        else printf("\tyaz�l�m kitab�\n");
        for(k=0;k<2;k++){
            if(k==0) printf("\t\tokula");
            else printf("\t\tkirtasiye");
            printf("\t\tkac adet satt�:");
            scanf("%d",&sales[i][j][k]);
            }
    }
printf("\n");
}
}
void writesales(){
i=0,j=0,k=0;
int toplamokul=0,toplamk�rtasiye=0,toplammatematik=0,toplamyaz�l�m=0;
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        toplamokul+=sales[i][j][0];
        toplamk�rtasiye+=sales[i][j][1];
        }
        for(k=0;k<2;k++){
            toplammatematik+=sales[i][0][k];
            toplamyaz�l�m+=sales[i][1][k];
        }
}
printf("\nokula toplam%d kitap sat�ld�\n",toplamokul);
printf("k�rtasiyeye toplam%d kitap sat�ld�\n",toplamk�rtasiye);
printf("toplam%d matematik kitab� sat�ld�\n",toplammatematik);
printf("toplam%d yaz�l�m kitab� sat�ld�\n",toplamyaz�l�m);
}
