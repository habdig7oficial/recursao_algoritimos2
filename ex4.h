#include "stdio.h"


void reverse_str(char str[], int len){
    printf("%s", str);
    if(len == 0 ){
        return;
    }

    char aux = str[0];
    str[0] = str[len - 2]; // menos dois por que tem o '/0' terminador
    str[len - 2] = aux;

    printf(" - %s - %d\n", str, len);
    reverse_str(&str[1], len - 1);
}
