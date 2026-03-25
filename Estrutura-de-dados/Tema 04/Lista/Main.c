#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

// função auxiliar pra imprimir
void imprimirLista(Lista *L) {
    if (L == NULL) {
        printf("Lista inexistente.\n");
        return;
    }

    printf("=== LISTA DE TAREFAS ===\n");
    printf("Total: %d / Capacidade: %d\n\n", L->Tamanho, L->Capacidade);

    for (int i = 0; i < L->Tamanho; i++) {
        Tarefa t = L->Dados[i];

        printf("Tarefa %d:\n", i + 1);
        printf("Titulo: %s\n", t.Titulo);
        printf("Responsavel: %s\n", t.Responsavel);
        printf("Status: %d\n", t.Status);
        printf("Progresso: %.2f\n", t.Progresso);
        printf("Avaliacao: %d\n", t.Avaliação);
        printf("----------------------\n");
    }
}

int main() {
    // cria lista com capacidade 10
    Lista *L = CriarLista(10);

    if (L == NULL) {
        printf("Erro ao criar lista\n");
        return 1;
    }

    // criando tarefas manualmente
    Tarefa t1 = {"Estudar C", "Carlos", EM_ANDAMENTO, 0.5, 4};
    Tarefa t2 = {"Fazer trabalho", "Joao", A_FAZER, 0.0, 0};
    Tarefa t3 = {"Treinar", "Carlos", FEITO, 1.0, 5};

    // adicionando na lista
    L->Dados[L->Tamanho++] = t1;
    L->Dados[L->Tamanho++] = t2;
    L->Dados[L->Tamanho++] = t3;

    // imprimir
    imprimirLista(L);

    // liberar memória
    free(L->Dados);
    free(L);

    return 0;
}