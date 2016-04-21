//
// Created by ganymed on 21/04/16.
//

#include "TextFileReader.h"


static FILE* textFile;

float calculateSumOfSecondColumn() {
    float sum = 0.0;

    if(openTextFile() == false) {
        return sum;
    }

    int firstColumn = 0, thirdColumn = 0;
    float secondColumn = 0.0;
    char forthColumn[7];
    int readResult = -1;

    while(1) {
        readResult = fscanf(textFile, "%d,%f,%d,%s", &firstColumn, &secondColumn, &thirdColumn, forthColumn);

        if(readResult != EOF) {
            sum += secondColumn;
        }
        else {
            break;
        }
    }

    closeTextFile();

    return sum;
}


bool openTextFile() {
    textFile = fopen("datei.txt", "r");

    return textFile != NULL;
}

bool closeTextFile() {
    if(textFile) {
        fclose(textFile);
        textFile = NULL;

        return true;
    }

    return false;
}


void task01() {
    float sumOfSecondColumn = calculateSumOfSecondColumn();
    printf("%.1f", sumOfSecondColumn);
}
