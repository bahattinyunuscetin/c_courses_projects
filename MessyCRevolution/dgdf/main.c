#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{FILE* fptr;
char myletter;
fptr=fopen("C:\\Users\\pc11\\Desktop\\data\\data.txt","r");
if(fptr == NULL){
    printf("file open unseccesful!");
}else{
do{
    myletter=getc(fptr);
    printf("%c",myletter);
}while(myletter!=EOF);
printf("\nreading is over\n");

}
fclose(fptr);
return 0;
}
