//
// Created by Soarezz on 3/16/26.
//

#include "equipe.h"
#include <stdio.h>
#include <stdlib.h>

int main() {


    Equipe * Tabela = LerDados("tabela2024.csv");

    for ( int i = 0; i < 20; i++) {
        printf("%d %s %.2f\n", Tabela[i].Posicao, Tabela[i].Estado, Tabela[i].Aproveitamento);
    }

    return 0;
}