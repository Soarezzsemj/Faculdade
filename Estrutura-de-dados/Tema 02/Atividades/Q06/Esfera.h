//
// Created by Soarezz on 08/04/2026.
//

#ifndef FACULDADE_ESFERA_H
#define FACULDADE_ESFERA_H

typedef struct Esfera {
    float raio;
} Esfera;

Esfera* Criar(float raio);
void esfera_Destruir(Esfera* e);

float esfera_ObterRaio(Esfera* e);
float esfera_ObterDiametro(Esfera* e);
float esfera_ObterArea(Esfera* e);
float esfera_ObterVolume(Esfera* e);


#endif //FACULDADE_ESFERA_H