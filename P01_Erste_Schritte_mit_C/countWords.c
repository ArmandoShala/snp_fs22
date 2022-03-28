//
// Created by Armando Shala on 28.03.22.
//

#include "stdio.h"
#include "countWords.h"

int main() {
//    fgets(singleChar, sizeof(singleChar), stdin);
    int charCount = 0;
    int wordCount = 1;
    char prevChar = ' ';
    char singleChar = ' ';
    printf("Enter a short singleChar to count words:\n");
    while (singleChar != '\n') {
        singleChar = getchar();
        charCount += 1;
        if (singleChar == ' ' || singleChar == '\t') {
            if (prevChar != ' ' && prevChar != '\t') {
                wordCount += 1;
            }
        }
        prevChar = singleChar;
    }

    printf("Char count is: %d\nWord count is: %d", --charCount, wordCount);
    return 1;
}