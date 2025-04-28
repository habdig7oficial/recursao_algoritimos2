#include "stdio.h"
#include "stdbool.h"
#include "ctype.h"

int j = 0;
bool ist_palindrom(char str[], int inicio, int fim){
    if(j == (inicio + fim)  / 2){
        j = 0;
        return true;
    }
    // menos dois por que tem o '/0' terminador
    if(tolower(str[inicio]) != tolower(str[fim - 2]))
        return false;
    

    /* printf(" - %s - %d, %d\n", str, inicio, fim); */
    j++;
    return ist_palindrom(str, inicio + 1, fim - 1);
}