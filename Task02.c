//
// Created by ganymed on 21/04/16.
//

#include "Task02.h"



void task02() {
    int countStars = -1;
    char textToWriteToFile[MaxTextLength];
    char filename[82];

    scanf("%i", &countStars);
    clearBuffer();

    gets(textToWriteToFile);

    gets(filename);

    FILE* textFile = fopen(filename, "w");

    printStars(textFile, countStars);

    fprintf(textFile, "%s", textToWriteToFile);

    printStars(textFile, countStars);

    fclose(textFile);
}

void clearBuffer() {
    char ch;
    do ch = getchar(); while ( ch != '\n' && ch != EOF );
}

void printStars(FILE *textFile, int countStars) {
    for(int i = 0; i < countStars; i++) {
        fputc('*', textFile);
    }
}
