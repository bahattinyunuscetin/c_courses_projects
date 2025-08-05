#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countcharacters(char x[], int y[]);

int main() {
    char x[100];
    int y[26] = {0}; // Harf sayaçlarýný sýfýrla

    printf("Enter a sentence (end with '.'): ");
    fgets(x, sizeof(x), stdin); // Kullanýcýdan bir satýr giriþ al

    countcharacters(x, y);

    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < 26; i++) {
        if (y[i] > 0) { // Eðer harf sayýsý sýfýrdan büyükse ekrana yazdýr
            printf("%c/%c: %d\n", 'A' + i, 'a' + i, y[i]);
        }
    }

    return 0;
}

void countcharacters(char x[], int y[]) {
    for (int i = 0; x[i] != '\0'; i++) { // '\0' karakterine kadar devam et
        if (x[i] >= 'A' && x[i] <= 'Z') {
            y[x[i] - 'A']++; // Büyük harfleri dizide say
        } else if (x[i] >= 'a' && x[i] <= 'z') {
            y[x[i] - 'a']++; // Küçük harfleri dizide say
        }
    }
}




