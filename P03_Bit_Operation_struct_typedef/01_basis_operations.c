#include <stdlib.h>
#include <stdio.h>

int selection = 0;

void getSelection() {
    printf("1:\tbit_OP\n2:\tSwap Var\n3:\tLower&Upper\n4:\tCheck power of 2\n99:\tQuit\nYour Input: ");
    scanf("%d", &selection);
}

int bit_OP() {
    unsigned int number = 0x75;
    unsigned int bit = 3; // bit at position 3

    // Setting a bit
    number |= 1UL << bit;

    // Clearing a bit
    bit = 1;
    number &= ~(1UL << bit);

    // Toggling a bit
    bit = 0;
    number ^= 1UL << bit;

    printf("number = 0x%02X\n", number);

    return EXIT_SUCCESS;
}

int swap_var() {
    int a = 3;
    int b = 4;
    printf("a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}

int lower_upper() {
    char word[8] = "sERedEv";
    char *wordptr = &word[0];

    while (wordptr < &word[7]) {
        printf("UPPERCASE: %c\n", *wordptr & '_');
        printf("LOWERCASE: %c\n", *wordptr | ' ');
        wordptr++;
    }
    return EXIT_SUCCESS;
}

int check_power_of_2() {
    int a = 32;
    if (a > 0 && (a & (a - 1)) == 0) {
        printf("%d is a power of 2\n", a);
    }
    return EXIT_SUCCESS;
}

int main() {
    getSelection();
    int attempt = 3;
    do {
        switch (selection) {
            case 1:
                bit_OP();
                attempt = 3;
                break;
            case 2:
                swap_var();
                attempt = 3;
                break;
            case 3:
                lower_upper();
                attempt = 3;
                break;
            case 4:
                check_power_of_2();
                attempt = 3;
                break;
            default:
                attempt--;
                printf("Invalid Selection\nLeft Attempt(s): %d\n", attempt);
                break;
        }
        getSelection();
    } while (attempt > 0 && selection != 99);
    printf("Stopping...\n");

    //compare django integerfield to integer
}