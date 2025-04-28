#include "stdio.h"

int acc = 0;
int count_digits(int n){
    acc++;
    if(n == 0)
        return acc;
    return count_digits(n / 10);
}