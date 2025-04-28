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














/*
    trocar 0 - 3        5 - 2 = 3
    trocar 0 - 1        4 - 2 = 2


    void reverse_str(char str[], int len){
    printf("%s", str);
    if(len <= 0 ){
        return;
    }

    char aux = str[0];
    str[0] = str[len - 2]; // menos dois por que tem o '/0' terminador
    str[len - 2] = aux;

    printf(" - %s - %d\n", str, len);
    reverse_str(&str[1], len - 2);
}

*/