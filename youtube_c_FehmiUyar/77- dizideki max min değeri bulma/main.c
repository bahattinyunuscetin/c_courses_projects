#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int size,i,big=0,small=100,bigIndex,smallIndex;
    int notes[100],stuedentno[100];

    printf("enter class size:");
    scanf("%d",&size);

    for(i=0;i<size;i++){
    printf("student no and note:");
    scanf("%d%d",&stuedentno[i],&notes[i]);
    }
    for(i=0;i<size;i++){
        if(notes[i]>big){
            big=notes[i];
            bigIndex=i;
            }
            if(notes[i]<small){
                    small=notes[i];
            smallIndex=i;
            }

    }
    printf("\n %d numaral� ��renci en yuksek notu (%d) alm��t�r",stuedentno[bigIndex],big);
   printf("\n %d numaral� ��renci en dusuk notu (%d) alm��t�r",stuedentno[smallIndex],small);

    return 0;
}
