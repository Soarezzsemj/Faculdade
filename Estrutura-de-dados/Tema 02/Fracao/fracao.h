//
// Created by Soarezz on 3/9/26.
//

#ifndef FACULDADE_FRACAO_H
#define FACULDADE_FRACAO_H

typedef struct {
    int numerador;
    int denominado;
} Fracao;


Fracao criarFracao(int N, int D); // molde

void exibirFracao(Fracao F);

Fracao simplificarFracao(Fracao F);

#endif //FACULDADE_FRACAO_H