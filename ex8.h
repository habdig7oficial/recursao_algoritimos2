#ifndef _ex08_h_
#define _ex08_h_

double exponencia(double base, int expoente){
    if(expoente == 0)
        return 1;
    else
        return base * exponencia(base, expoente - 1);
}

#endif