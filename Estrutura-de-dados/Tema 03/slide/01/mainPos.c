//
// Created by Soarezz on 07/04/2026.
//

#include <stdio.h>
#include <stdlib.h>

int encontrar_posicao(int *vetor, int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return i;
        }

    }
    return -1;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int elemento = 9;
    int posicao = encontrar_posicao(numeros, tamanho, elemento);

    if (posicao != -1) printf("elemento %d encontrado na posicao: %d\n", elemento, posicao);
    else printf("elemento %d nao encontrado", elemento);
    return 0;
}