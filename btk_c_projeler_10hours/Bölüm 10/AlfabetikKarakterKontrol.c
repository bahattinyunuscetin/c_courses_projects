/* BTK Akademi - C Programlama Dili Kursu */

/**
 * C programlama dili ile verilen bir karakterin 
 * alfabetik olup olmadığının belirlenmesi
 */

#include <stdio.h>

int main()
{
    char karakter;
    
    /* Kullanıcıdan bir karakter al */
    printf("Lütfen bir karakter giriniz: "); // Türkçe karakterler için alfabetik değil diyecektir
    scanf("%c", &karakter);
    

    if((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
    {
        printf("Alfabetik bir karakter girdiniz.");
    }
    else
    {
        printf("Alfabetik olmayan bir karakter girdiniz.");
    }

    return 0;
}