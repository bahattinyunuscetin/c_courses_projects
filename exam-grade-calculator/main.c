#include <stdio.h>

int main() {
    int i = 0;
    float examGrade, sumGrade = 0.0, average;

    printf("S�nav notlar�n� girin (0 girerek ��kabilirsiniz):\n");

    while (1) {
        printf("%d. s�nav notu: ", i + 1);
        scanf("%f", &examGrade);

        if (examGrade == 0) {
            break;
        }
        if (examGrade < 0) {
            printf("L�tfen pozitif bir not girin!\n");
            continue;
        }

        sumGrade += examGrade;
        i++;
    }

    if (i > 0) {
        average = sumGrade / i;
        printf("\nToplam %d s�nav notu girildi.\n", i);
        printf("Ortalama: %.2f\n", average);
    } else {
        printf("Hi� ge�erli not girilmedi.\n");
    }

    return 0;
}
