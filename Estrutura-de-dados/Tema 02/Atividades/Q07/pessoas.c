//
// Created by Soarezz on 08/04/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include "pessoas.h"

void initLista(ListaPessoas *L) {

    L -> capacidade = 10;

    L->tamanho = 0;

    L->dados = (Pessoa*) malloc(L->capacidade * sizeof(Pessoa));

    if (L->dados == NULL) {
        printf("Erro ao criar dados");
        exit(1);
    }

};

Pessoa* buscarPessoaPorId(ListaPessoas *L, int id) {
    // Percorre a lista do início ao fim
    for (int i = 0; i < L->tamanho; i++) {
        // Se o ID da pessoa na posição 'i' for igual ao ID que buscamos...
        if (L->dados[i].id == id) {
            return &L->dados[i]; // Retorna o endereço dessa pessoa
        }
    }
    return NULL; // Se percorreu tudo e não achou, retorna "nada"
}