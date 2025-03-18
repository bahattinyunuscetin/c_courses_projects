#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

void sortıt();
void writethearray();

int numbers[7];
int i;


int main()
{
    printf("enter array numbers:");
    for(i=0;i<7;i++){
        scanf("%d",&numbers[i]);

    }
return 0;

}
void sortıt(){
int j,reserve;
for(i=0;i<7;i++){
    for (j=i+1;j<7;j++){
        if(numbers[j]<numbers[i]){
            reserve=numbers[i];
            numbers[i]=numbers[j];
            numbers[j]=reserve;
        }


    }


}



}
void writethearray(){
for(i=0;i<7;i++){

    printf("%d",numbers[i]);

}
printf("\n")
}
void writethearrayreserve(){
for(i=6;i>=0;i--){

    printf("%d",numbers[i]);

}
printf("\n")
}
 return 0;





}
