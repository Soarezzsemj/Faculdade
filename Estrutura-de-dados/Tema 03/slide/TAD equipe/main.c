//
// Created by Soarezz on 3/16/26.
//

#include "equipe.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Equipe * Tabela = LerDados("tabela2024.csv");

    if (Tabela == NULL) return 1; // Encerra se houve erro na leitura

    for (int i = 0; i < 20; i++) {
        printf("%d - %s (Aproveitamento: %.2f%%)\n", Tabela[i].Posicao, Tabela[i].Time, Tabela[i].Aproveitamento);
    }

    free(Tabela); // Boa prática: liberar a memória alocada
    return 0;
}