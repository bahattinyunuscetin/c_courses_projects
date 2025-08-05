#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countcharacters(char x[], int y[]);

int main() {
    char x[100];
    int y[26] = {0}; // Harf saya�lar�n� s�f�rla

    printf("Enter a sentence (end with '.'): ");
    fgets(x, sizeof(x), stdin); // Kullan�c�dan bir sat�r giri� al

    countcharacters(x, y);

    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < 26; i++) {
        if (y[i] > 0) { // E�er harf say�s� s�f�rdan b�y�kse ekrana yazd�r
            printf("%c/%c: %d\n", 'A' + i, 'a' + i, y[i]);
        }
    }

    return 0;
}

void countcharacters(char x[], int y[]) {
    for (int i = 0; x[i] != '\0'; i++) { // '\0' karakterine kadar devam et
        if (x[i] >= 'A' && x[i] <= 'Z') {
            y[x[i] - 'A']++; // B�y�k harfleri dizide say
        } else if (x[i] >= 'a' && x[i] <= 'z') {
            y[x[i] - 'a']++; // K���k harfleri dizide say
        }
    }
}




