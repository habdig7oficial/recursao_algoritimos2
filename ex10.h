#include "ex8.h"

#include "stdio.h"

int soma_quadrados(int n){
    if(n == 0)
        return 0;
    else
        return (int)exponencia((double)n, 2) + soma_quadrados( n - 1);
}

