#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void readsales();
void writeSales();
int sales[3][2][2];
int i,j,k;

int main()
{
    readsales();
    writeSales();
    return 0;
    }
    void readsales(){
    for(i=0;i<3;i++){
        printf("%d. sat�� temsilcisi:\n",i+1);
        for(j=0;j<3;j++){
            if(j==0) printf("\tmatematik kitab�\n");
            else printf("\tyaz�l�m kitab�\n");
            for(k=0;k<2;k++){
                if(k==0) printf("\t\tokula");
            else printf("\t\tk�rtasiyeye ");
            printf(" kac adet satt�: ");
            scanf("%d",&sales[i][j][k]);

        }

    }
    printf("\n");
    }
    }

void writeSales(){
    i=0,j=0,k=0;
    int toplamOkul=0,toplamkirtasiye=0,toplamMatematik=0,toplamyazilim=0;

    for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                toplamOkul+=sales[i][j][0];
                toplamkirtasiye+=sales[i][j][1];

            }

         for(k=0;k<2;k++){
                toplamMatematik+=sales[i][0][k];
                toplamyazilim+=sales[i][1][k];
                            }
    }

    }
    printf("\n okula toplam %d kitap satildi\n",toplamOkul);
    printf("k�rtasiyeye toplam %d kitap sat�ld�\n",toplamkirtasiye);
    printf("toplam %d matematik kitab� sat�ld�\n",toplamMatematik);
    printf("\n toplam %d yaz�l�m kitab� sat�ld�\n",toplamyazilim);
