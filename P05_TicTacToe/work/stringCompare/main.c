#include "stdio.h"

#define MAX_WORDS 10
#define MAX_LEN_WORD 20

void storeInput() {

}

int main() {

    printf("Maximal %d Wörter eingeben mit maximaler Länge %d oder ZZZ zum beenden:\n", MAX_WORDS, MAX_LEN_WORD);

    char words[MAX_WORDS];
    char *input;
    int counter = 0;
    while (!strcmp(input, "ZZZ") || counter <= MAX_WORDS) {
        scanf("%s", input);
        printf("%d\n", counter);
        counter++;
        words[counter] = input;
    }
    for (int i = 0; i < MAX_WORDS; i++) {
        printf("%d ", words[i]);
    }
}