//
// Created by Soarezz on 3/9/26.
//


#include "fracao.h"



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