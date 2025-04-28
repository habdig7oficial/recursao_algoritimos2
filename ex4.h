#include "stdio.h"

int i = 0;
void reverse_str(char str[], int inicio, int fim){
    if(i == (inicio + fim)  / 2){
        i = 0;
        return;
    }

    char aux = str[inicio];
    str[inicio] = str[fim - 2]; // menos dois por que tem o '/0' terminador
    str[fim - 2] = aux;

    /* printf(" - %s - %d, %d\n", str, inicio, fim); */
    i++;
    reverse_str(str, inicio + 1, fim - 1);
}