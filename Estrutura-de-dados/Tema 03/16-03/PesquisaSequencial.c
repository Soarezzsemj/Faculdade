//
// Created by Soarezz on 3/16/26.
//

#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int Contador; // variavel GLOBAL

int PesquisaSequencial(int * Vetor, int Tamanho, int Chave);

int main() {
    int V[] = {14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
                40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
                30, 41, 15, 27, 33, 18, 26, 39, 12, 21
    };

    int N = sizeof(V) / sizeof(int);

    int Teste_1 = PesquisaSequencial(V,N,16);
    printf("%d ifs \t", Contador);
    if (Teste_1 == ERRO) printf("o elemento nao esta no vetor \n");
    else printf("o elemento procurado esta na posicao %d.\n", Teste_1);

}


int PesquisaSequencial(int * Vetor, int Tamanho, int Chave) {

    for (int i = 0; i < Tamanho; i++) {
        Contador++;
        if (Vetor[i] == Chave) {
            return i;
        }
    }

}
