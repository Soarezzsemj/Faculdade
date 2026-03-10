//
// Created by Soarezz on 3/9/26.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominado;
} Fracao;


Fracao criarFracao(int N, int D); // molde

void exibirFracao(Fracao F);

Fracao simplificarFracao(Fracao F);

int main() {


    Fracao F1 = criarFracao(3,7);
    Fracao F2 = criarFracao(30, 8);

    exibirFracao(F1);

    F1 = simplificarFracao(F1);
    exibirFracao(F1);

    //Fracao F2; // chama a struct fracao e atribui o nome F1 na struct
    //F2.numerador = 3; // inicia o numerador com o 3
    //F2.denominado = 7; // inicia o denominador com o 7




    return 0;
}


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