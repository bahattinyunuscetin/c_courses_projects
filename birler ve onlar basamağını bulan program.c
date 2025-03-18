#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mynumber,first,second;
    printf("pozitif bir sayi giriniz:");
    scanf("%d",&mynumber);
    first=mynumber%10;
    second=(mynumber%100)/10;
    printf("\ngirilen sayinin birler basamagi:%d\n",first);
    printf("girilen sayinin onlar basamagi:%d\n",second);



    return 0;
}
