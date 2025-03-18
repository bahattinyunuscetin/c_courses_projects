#include <stdio.h>

void sort(int numbers[], int n);

int main() {
    int n, i;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number.\n");
        return 1;
    }

    // Dynamic array based on user input (C99)
    int numbers[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sorting the array
    sort(numbers, n);

    // Printing the sorted array
    printf("Sorted numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

void sort(int numbers[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (numbers[j] < numbers[i]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}


