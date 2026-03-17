//
// Created by Soarezz on 3/16/26.
//

#ifndef FACULDADE_EQUIPE_H
#define FACULDADE_EQUIPE_H

typedef struct {
  int Posicao;
  char Estado[32];
  int Pontos;
  int J;
  int V;
  int E;
  int GP;
  int GC;
  int SG;
  float Aproveitamento;
} Equipe;

Equipe * LerDados(char * Arquivo); // Equipe * : vetor de equipes

#endif //FACULDADE_EQUIPE_H