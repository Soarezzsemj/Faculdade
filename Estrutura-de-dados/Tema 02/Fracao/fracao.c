//
// Created by Soarezz on 3/9/26.
//

#include "fracao.h"
#include <stdio.h>

Fracao criarFracao(int N, int D) {
    Fracao F;

    F.numerador = N;
    F.denominado = D;

    return F;
}

void exibirFracao(Fracao F) {
    printf("%d / %d \n", F.numerador, F.denominado);
}

int calcularMDC(int A, int B) {

    int Resto = A % B;

    while (Resto != 0) {
        A = B;
        B = Resto;
        Resto = A % B;
    }

    return B;

}

Fracao simplificarFracao(Fracao F) {
    int mdc = calcularMDC(F.numerador, F.denominado);

    F.numerador = F.numerador / mdc;
    F.denominado = F.denominado / mdc;

}
