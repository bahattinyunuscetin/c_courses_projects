#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3, max, min; // Burada virg�l ekledim
    printf("Enter three numbers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    // Maksimum say�y� bulma
    if (number1 > number2 && number1 > number3) {
        max = number1;
    } else if (number2 > number1 && number2 > number3) {
        max = number2;
    } else {
        max = number3;
    }

    // Minimum say�y� bulma
    if (number1 < number2 && number1 < number3) {
        min = number1;
    } else if (number2 < number1 && number2 < number3) {
        min = number2;
    } else {
        min = number3;
    }

    printf("The largest number: %d\n", max);
    printf("The least number: %d\n", min);

    return 0;
}
