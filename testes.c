#include "assert.h"
#include "includes.h"


void teste1(){
    assert(fact(5) == 120);
    assert(fact(0) == 1);
    assert(fact(1) == 1);
    assert(fact(3) == 6);
}

void teste2(){
    assert(soma(4) == 10);
}

void teste3(){
    assert(fib(8) == 34);
}
void teste4(){
    char hello[] = "abcd";
    reverse_str(hello, sizeof(hello) / sizeof(hello[0]));
    printf("Res: %s", hello);
}

void teste8(){
    assert(exponencia(5, 2) == 25);
    assert(exponencia(2, 5) == 32);
}

void teste9(){
    int vec[] = {0, 20, 27, 10, 1, -1};
    assert(max(vec, sizeof(vec) / sizeof(vec[0])) == 27);
}

int main(){
    typedef void(*Teste)(void);

    Teste testes[] = {teste1, teste2, teste3,  teste8, teste9};

    for(int i = 0; i < sizeof(testes) / sizeof(testes[0]); i++){
        testes[i]();
    }
    printf("Todos os testes finalizados!");
    return 0;
}