#include <stdio.h>

int main() {
    int i = 0;
    float examGrade, sumGrade = 0.0, average;

    printf("Sýnav notlarýný girin (0 girerek çýkabilirsiniz):\n");

    while (1) {
        printf("%d. sýnav notu: ", i + 1);
        scanf("%f", &examGrade);

        if (examGrade == 0) {
            break;
        }
        if (examGrade < 0) {
            printf("Lütfen pozitif bir not girin!\n");
            continue;
        }

        sumGrade += examGrade;
        i++;
    }

    if (i > 0) {
        average = sumGrade / i;
        printf("\nToplam %d sýnav notu girildi.\n", i);
        printf("Ortalama: %.2f\n", average);
    } else {
        printf("Hiç geçerli not girilmedi.\n");
    }

    return 0;
}
