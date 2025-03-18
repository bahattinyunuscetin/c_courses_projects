#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int number, squareroot;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive number!\n");
    } else {
        squareroot = sqrt(number);
        if (squareroot * squareroot == number) {
            printf("Square root of %d is an integer.\n", number);
        } else {
            printf("No, it is not an integer.\n");
        }
    }

    // Telefon görüþme ücreti hesaplama
    float talktime, fee;
    printf("Phone talk time (minutes): ");
    scanf("%f", &talktime);

    if (talktime <= 4.0) {
        fee = 0.30;
    } else {
        fee = 0.30 + (talktime - 4) * 0.07;
    }
    printf("Fee: %.3f TL\n", fee);

    // Üçgen türü belirleme
    int angle1, angle2, angle3;
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 != 180) {
        printf("This is NOT a valid triangle!\n");
    } else if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
        printf("This is an equilateral triangle.\n");
    } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
        printf("This is an isosceles triangle.\n");
    } else {
        printf("This is a scalene triangle.\n");
    }

    // Karakter türü belirleme
    char mycharacter;
    getchar();  // Önceki scanf'ten kalan '\n' karakterini temizle
    printf("Enter a character: ");
    scanf("%c", &mycharacter);

    if (mycharacter >= 'A' && mycharacter <= 'Z') {
        printf("%c is an uppercase letter.\n", mycharacter);
    } else if (mycharacter >= 'a' && mycharacter <= 'z') {
        printf("%c is a lowercase letter.\n", mycharacter);
    } else {
        printf("%c is not a letter.\n", mycharacter);
    }

    // Gün isimleri (switch-case)
    int day;
    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day!\n"); break;
    }

    return 0;
}
