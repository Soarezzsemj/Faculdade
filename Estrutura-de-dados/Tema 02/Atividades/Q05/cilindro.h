//
// Created by Soarezz on 07/04/2026.
//

#ifndef FACULDADE_CILINDRO_H
#define FACULDADE_CILINDRO_H

typedef struct Cilindro {
    float raio;
    float altura;

}Cilindro;

Cilindro* Criar(float raio, float altura);
void Cilindro_Destruir(Cilindro* c);

float cilindro_obterRaio(Cilindro* c);
float cilindro_obterAltura(Cilindro* c);


float cilindro_obterVolume(Cilindro* c);
float cilindro_obterArea(Cilindro* c);




#endif //FACULDADE_CILINDRO_H