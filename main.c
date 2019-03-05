#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
    int choice;
    int numbersArr[LEN];
    bool insertedArr;
    for (;;) {
        system("clear");
        menu();
        scanf(" %i", &choice);
        switch (choice) {
            case 1:
                system("clear");
                updateArr(numbersArr, &insertedArr, 0);
                break;
            case 2:
                checkArr(numbersArr, &insertedArr);
                printArr(numbersArr, "Podany");
                sortArr(numbersArr, true);
                waitEnter();
                break;
            case 3:
                checkArr(numbersArr, &insertedArr);
                printArr(numbersArr, "Podany");
                arithMean(numbersArr);
                waitEnter();
                break;
            case 4:
                checkArr(numbersArr, &insertedArr);
                printArr(numbersArr, "Podany");
                sortArr(numbersArr, false);
                waitEnter();
                break;
            case 5:
                exit(0);
            default:
                clearBuffer();
        }
    }
    return 0;
}