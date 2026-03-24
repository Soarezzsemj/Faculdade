//
// Created by Carlos Eduardo on 23/03/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

int main () {

    system("clear");

    Tarefa * T = (Tarefa *) malloc (sizeof(Tarefa));

    strcpy(T->Titulo, "Codiguin da calsa angelical");
    strcpy(T->Responsavel, "JuninBalaTensa");
    T -> Avaliação = 4;
    T -> Progresso = 0.80;
    T -> Status = EM_ANDAMENTO;

    // utilizando struct tarefa (sem ponteiro)

    Tarefa U;

    strcpy(U.Titulo, "como ser o rei da p90");
    strcpy(U.Responsavel, "g2 cabeludo");
    U.Status = EM_ANDAMENTO;
    U.Progresso = 0.80;
    U.Avaliação= 56;

    Tarefa T1 = {"Entrega do relatório de BD", "Rafael Souza", FEITO, 1.00, 4};
    Tarefa T2 = {"Revisão do código do sistema", "Carlos Henrique", FEITO, 1.00, 5};
    Tarefa T3 = {"Criação de mockups para o app", "Juliana Ribeiro", EM_ANDAMENTO, 0.40, 3};
    Tarefa T4 = {"Levantamento de requisitos", "Rafael Souza", A_FAZER, 0.00, 2};
    Tarefa T5 = {"Treinamento da equipe", "Fernanda Lima", EM_ANDAMENTO, 0.60, 4};
    Tarefa T6 = {"Testes automatizados", "Lucas Martins", A_FAZER, 0.00, 5};
    Tarefa T7 = {"Atualização da documentação técnica", "Mariana Alves", A_FAZER, 0.00, 3};
    Tarefa T8 = {"Integração com API externa", "Pedro Rocha", EM_ANDAMENTO, 0.50, 4};
    Tarefa T9 = {"Apresentação para o cliente", "Bianca Torres", FEITO, 1.00, 5};
    Tarefa T10 = {"Correção de bugs críticos", "João Victor", EM_ANDAMENTO, 0.30, 5};


    return 0;
}

