//
// Created by Soarezz on 08/04/2026.
//


#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

Cilindro* Criar(float raio, float altura) {
    if (raio <= 0 || altura <= 0) {
        return NULL;
    }

    Cilindro* c = (Cilindro*) malloc(sizeof(Cilindro));
    if (c != NULL) {
        c->raio = raio;
        c->altura = altura;
    }
    return c;
}


void cilindro_destruir(Cilindro* c) {
    if (c != NULL) {
        free(c);
    }
}

float cilindro_obterRaio(Cilindro* c) {
    return c->raio;
}

float cilindro_obterAltura(Cilindro* c) {
    return c->altura;
}

float cilindro_obterVolume(Cilindro* c) {
    float pi = 3.14159;

    return pi *( c -> raio * c -> raio) * c -> altura;

}

float cilindro_obterArea(Cilindro* c) {
    float pi = 3.14159;

    return 2 * pi * c -> raio * (c -> raio + c -> altura);

}