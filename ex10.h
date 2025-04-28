#include "ex8.h"



int soma_quadrados(int n){
    if(n == 0)
        return 0;
    else
        return n + soma_quadrados( - 1);
}

