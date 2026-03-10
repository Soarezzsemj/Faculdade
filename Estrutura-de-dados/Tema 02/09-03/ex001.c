//
// Created by Soarezz on 3/9/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ehPrimo(int N);



//implementacao da funcao main
int main() {

    system("clear");

 int Resposta = ehPrimo(4);

    if (Resposta == 1) {
        printf("numero primo.\n");
    }else {
        printf("nao e primo");
    }

    return 0;
}

// implementacao das funcoes acessorias

int ehPrimo(int N) {

    if ( N <= 1) return 0;

    int Contador = 0;

    for (int i = 2; i < N; i++) {

        Contador++;

        if (N % i == 0) {
            printf("%d\t", Contador);
            return 0;
        }
    }
    printf("%d\t", Contador);
return 1;
}