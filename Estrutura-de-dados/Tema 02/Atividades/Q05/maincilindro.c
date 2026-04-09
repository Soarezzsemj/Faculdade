//
// Created by Soarezz on 08/04/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

int main() {

    system("cls");

    Cilindro* c = Criar(3.0, 2.0);

    if (c == NULL) {
        printf("erro ao criar o cilindro");
        return 1;
    }

    printf("Raio: %.2f\n", cilindro_obterRaio(c));
    printf("Altura: %.2f\n", cilindro_obterAltura(c));
    printf("Volume: %.2f\n", cilindro_obterVolume(c));
    printf("Area: %.2f\n", cilindro_obterArea(c));
    printf("\n\n");
    return 0;

}