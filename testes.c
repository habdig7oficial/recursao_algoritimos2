/*
    Copyright © 2025 Mateus Felipe da Silveira Vieira
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>5.
*/

#include "assert.h"
#include "includes.h"

#include "string.h"

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
    reverse_str(hello, 0, sizeof(hello) / sizeof(hello[0]));
    assert(strcmp(hello, "dcba") == 0);

    char lorem[] = "Lorem Ipsum Dolor Sit Amed";
    reverse_str(lorem, 0, sizeof(lorem) / sizeof(lorem[0]));
    assert(strcmp(lorem, "demA tiS roloD muspI meroL") == 0);

    char num[] = "1234567";
    reverse_str(num, 0, sizeof(num) / sizeof(num[0]));
    assert(strcmp(num, "7654321") == 0);
}

void teste5(){
    assert(count_digits(1270) == 4);
}

void teste6(){
    assert(mdc(36, 14) == 2);
    assert(mdc(125, 100) == 25);
    assert(mdc(77, 27) == 1);
}

void teste7(){
    char ovo[] = "Ovo";
    assert(ist_palindrom(ovo,0, sizeof(ovo) / sizeof(char)) == true);

    char hallo[] = "Hallo";
    assert(ist_palindrom(hallo,0, sizeof(hallo) / sizeof(char)) == false);

    char roma[] = "Amor a roma";
    assert(ist_palindrom(roma,0, sizeof(roma) / sizeof(char)) == true);
}

void teste8(){
    assert(exponencia(5, 2) == 25);
    assert(exponencia(2, 5) == 32);
}

void teste9(){
    int vec[] = {0, 20, 27, 10, 1, -1};
    assert(max(vec, sizeof(vec) / sizeof(vec[0])) == 27);
}

void teste10(){
    assert(soma_quadrados(4) == 30);
    assert(soma_quadrados(0) == 0);
    assert(soma_quadrados(1) == 1);
    assert(soma_quadrados(2) == 5);
}

typedef void(*Teste)(void);

int main(){

    Teste testes[] = {teste1, teste2, teste3, teste4, teste5, teste6, teste7, teste8, teste9, teste10};

    for(int i = 0; i < sizeof(testes) / sizeof(testes[0]); i++){
        testes[i]();
    }
    printf("Todos os testes finalizados!");
    return 0;
}