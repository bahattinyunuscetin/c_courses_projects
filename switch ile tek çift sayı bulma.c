#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

    printf("enter a letter:");
    scanf("%c",&letter);

    switch(letter){
        case 'a':
        case 'e':
        case 'u':
        case 'o':
        case 'i':printf("%c is a vowel\n",letter); break;
        default:printf("%c is a vowel\n",letter);
                printf("or not a letter\n\n");


    }

    return 0;
}

