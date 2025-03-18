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
    printf("%d. satýþ temsilcisi:\n",i+1);
    for(j=0;j<2;j++){
        if(j==0) printf("\tmatematik kitabý\n");
        else printf("\tyazýlým kitabý\n");
        for(k=0;k<2;k++){
            if(k==0) printf("\t\tokula");
            else printf("\t\tkirtasiye");
            printf("\t\tkac adet sattý:");
            scanf("%d",&sales[i][j][k]);
            }
    }
printf("\n");
}
}
void writesales(){
i=0,j=0,k=0;
int toplamokul=0,toplamkýrtasiye=0,toplammatematik=0,toplamyazýlým=0;
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        toplamokul+=sales[i][j][0];
        toplamkýrtasiye+=sales[i][j][1];
        }
        for(k=0;k<2;k++){
            toplammatematik+=sales[i][0][k];
            toplamyazýlým+=sales[i][1][k];
        }
}
printf("\nokula toplam%d kitap satýldý\n",toplamokul);
printf("kýrtasiyeye toplam%d kitap satýldý\n",toplamkýrtasiye);
printf("toplam%d matematik kitabý satýldý\n",toplammatematik);
printf("toplam%d yazýlým kitabý satýldý\n",toplamyazýlým);
}
