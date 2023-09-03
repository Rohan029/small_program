//Write a program to display the sequence A1, B2, C4, D8, E16, F32, .................
#include <stdio.h>

int main() {
    char currentChar = 'A';
    int currentNumber = 1;
int n=10;
    printf("The sequence is: \n");

    for (int i = 0; i < n; i++) { // Change '6' to the number of terms you want to display.
        printf("%c%d, ", currentChar, currentNumber);
        currentChar++;
        currentNumber *= 2;
    }

    printf("\n");

    return 0;
}

