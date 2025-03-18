#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space, i, rows, j, number = 1; // Değişkenleri tanımla

    printf("Enter the number of rows: "); // kullanıcıdan satır sayısını al
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // boşlukları yazdır
        for (space = 1; space <= rows - i; space++)
            printf("  ");

        // Pascal üçgeni sayıları yazdır
        for (j = 0; j <= i; j++) {
            if (j == 0 )
                number = 1; // ilk eleman her zaman
            else
                number = number * (i - j + 1) / j; // Pascal üçgeni formülü

            printf("%4d", number);
        }
        printf("\n"); //
    }

    return 0;
}
