#include <stdio.h>
#include <math.h>

int main() {
    int number, i, j, isPrime;

    // Kullanıcıdan giriş alınması
    printf("Bir sayı girin: ");
    scanf("%d", &number);

    printf("1 ile %d arasındaki asal sayılar:\n", number);

    // 2 özel bir asal sayıdır
    if (number >= 2) {
        printf("2\n");
    }

    // Asal sayıları bulma
    for (i = 3; i <= number; i += 2) { // Çift sayıları kontrol etmeye gerek yok (2 hariç)
        isPrime = 1;

        for (j = 2; j <= sqrt(i); j++) { // Daha verimli kontrol
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", i);
        }
    }

    return 0;
}
