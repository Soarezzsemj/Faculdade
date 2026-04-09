//
// Created by Soarezz on 08/04/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include "Esfera.h"


int main() {

    system("cls");

    Esfera* e = Criar(42.0);

    if (e == NULL) {
        printf("erro ao criar o cilindro");
        return 1;
    }

    printf("Raio: %.2f\n", esfera_ObterRaio(e));
    printf("diametro: %.2f\n", esfera_ObterDiametro(e));
    printf("area: %.2f\n", esfera_ObterArea(e));
    printf("volume: %.2f\n", esfera_ObterVolume(e));
    esfera_Destruir(e);

    return 0;
}

