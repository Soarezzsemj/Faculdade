//
// Created by Carlos Eduardo on 23/03/26.
//

#ifndef FACULDADE_LISTA_H
#define FACULDADE_LISTA_H

// config geral
#define TAM_TITULO 96
#define TAM_NOME 48


//definições para status
#define  A_FAZER 0
#define EM_ANDAMENTO 1
#define FEITO 2

// struct para a tad tarefas

typedef struct {
    char Titulo[TAM_TITULO];
    char Responsavel[TAM_NOME];
    int Status; // 0  (a fazer) 1 (andamento) 2 (feito)
    float Progresso;
    int Avaliação; // 1 a 5
} Tarefa;

// definindo o TAD lista (implementando usando vetor)

typedef struct {
    Tarefa * Dados; // interpretado como um vetor de tarefas
    int Capacidade; // numero maximo de elementos que podem ser inseridos na lista
    int Tamanho; // quantidade de tarefas que estao na lista

} Lista;

Lista * CriarLista(int C);


#endif //FACULDADE_LISTA_H