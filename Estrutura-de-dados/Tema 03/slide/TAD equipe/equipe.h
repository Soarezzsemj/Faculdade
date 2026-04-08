//
// Created by Soarezz on 3/16/26.
//

#ifndef FACULDADE_EQUIPE_H
#define FACULDADE_EQUIPE_H

typedef struct {
  int Posicao;
  char Estado[32];
  char Time[32];
  int Pontos;
  int J; // numero de jogos
  int V; // numero de vitorias
  int E; // numero de empates
  int D; // numero de derrotas
  int GP; // gols pontuados / marcados
  int GC; // gols sofridos
  int SG; // saldo de gols
  float Aproveitamento; // % de gols conquistados em relacao ao total de pontos disuputados
} Equipe;

Equipe * LerDados(const char * NomeArquivo); // Equipe * : vetor de equipes
int getGolsMarcados(Equipe *Tabela, char *NomeEquipe);

#endif //FACULDADE_EQUIPE_H