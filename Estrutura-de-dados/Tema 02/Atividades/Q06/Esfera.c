//
// Created by Soarezz on 08/04/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include "Esfera.h"

Esfera* Criar(float raio) {
    Esfera* e = (Esfera*)malloc(sizeof(Esfera));

    if (raio <= 0) {
        return NULL;
    }

    if (e != NULL) {
        e->raio = raio;
    }
    return e;
}

void esfera_Destruir(Esfera* e) {
    if (e != NULL) {
        free(e);
    }
}

float esfera_ObterRaio(Esfera* e) {
    return e->raio;
}

float esfera_ObterDiametro(Esfera* e) {
    return 2 * e -> raio;
}

float esfera_ObterArea(Esfera* e) {
    float pi = 3.14159;

    return 4.0 * pi * ( e -> raio * e -> raio);
}

float esfera_ObterVolume(Esfera* e) {
    float pi = 3.14159;

    return (4.0/3.0) * pi * ( e -> raio * e -> raio * e -> raio);
}

