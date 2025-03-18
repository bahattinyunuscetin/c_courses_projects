#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void charecterscroll(char*,int);
int main()
{
    char charecters[7]={'Y','a','z','i','l','i','m'};
    int size=sizeof(charecters)/sizeof(charecters[0]);
    charecterscroll(charecters,size);
    return 0;
}
void    charecterscroll(char* charecters,int size){
    int i=0,j=0;
    for(i=0;i<size+1;i++){
            for(j=i;j<size;j++){
                printf("%c",*(charecters+j));

            }
            for(j=0;j<i;j++){
                printf("%c",*(charecters+j));

            }
        printf("\n");
    }
    }


