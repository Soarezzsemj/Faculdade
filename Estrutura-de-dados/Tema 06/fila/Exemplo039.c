//
// Created by Soarezz on 04/05/26.
//


#include <stdio.h>
#include <stdlib.h>

#define MAX 4
//definindo o ITEM da fila

typedef struct{
    int Chave;

} Item;


// definindo a FILA (propriamente dito)

typedef struct{

    Item * Dados; // ponteiro para o vetor de itens
    int Inicio; // item do início da fila
    int Fim; // posição do próximo item a ser inserido (ou seja, o final da fila)
    int Tamanho; // número atual de itens na fila
    int Capacidade; // capacidade máxima da fila

} Fila;



// Protótipos de funções



Item CriarItem(int Chave);
Fila * CriarFila(int Capacidade);
void DestruirFila(Fila *F);
void Enfileirar(Fila *F, Item I);
void Desenfileirar(Fila *F);
void ExibirFila(Fila *F);



//main
int main() {
    system("clear");

    // criando fila com capacidade 15

    Fila * Exemplo = CriarFila(15);

    Enfileirar( Exemplo, CriarItem(137)); // 137 é o primeiro elemento enfileirado
    Enfileirar( Exemplo, CriarItem(241)); // 241 é o segundo elemento enfileirado
    Enfileirar( Exemplo, CriarItem(3339)); // 339 é o terceiro elemento enfileirado

    ExibirFila(Exemplo);

    Desenfileirar(Exemplo); // Remove o primeiro elemento (137)
    printf("\nApós desenfileirar:\n");
    ExibirFila(Exemplo);


    DestruirFila(Exemplo);


    return 0;
}

//implementação das operaçoes(funções)

Item CriarItem(int Chave){

    Item I;
    I.Chave = Chave;
    return I;

}

Fila * CriarFila(int Capacidade){

    Fila * F = (Fila *)malloc(sizeof(Fila));

    if (F == NULL) {
        printf("Erro ao alocar memoria para a fila");
        return NULL;
    }

    F->Capacidade = Capacidade;
    F->Tamanho = 0;
    F->Inicio = -1; // Inicialmente, a fila está vazia, então o início é definido como -1
    F->Fim = -1;


    F ->Dados = (Item *)malloc(Capacidade * sizeof(Item)); // Alocação dinâmica do vetor de itens

if ( F->Dados == NULL) {
        printf("Erro ao alocar memoria para os dados da fila");
        free(F); // Liberar a memória da fila antes de retornar
        return NULL;
    }

    return F;


};

void DestruirFila(Fila *F){

    if (F == NULL) {
        return ; // Se a fila já for NULL, não há nada a destruir
        free(F->Dados); // Liberar a memória alocada para os dados
        free(F); // Liberar a memória alocada para a fila
    }


};

void Enfileirar(Fila *F, Item I){

    if ( F-> Tamanho == F ->Capacidade) return ; // A fila está cheia, não é possível enfileirar
    if (F->Inicio == -1) F->Inicio = 0; // Se a fila estava vazia, o início agora é 0


    F->Fim = F -> Fim + 1; // Avança a posição do fim
    F->Dados[F->Fim] = I; // Insere o item no final da fila
    F->Tamanho++; // Incrementa o tamanho da fila


};

void Desenfileirar(Fila *F){

    F->Inicio = F -> Inicio + 1; // Avança a posição do fim
    F->Tamanho--; // Incrementa o tamanho da fila

};

void ExibirFila(Fila *F){

    for (int i = F ->Inicio; i <= F->Fim; i++) {
        printf("Chave do item %d: %d\n", i - F->Inicio + 1, F->Dados[i].Chave);
    }


};





/*
Struct -> TAD -> TAD FRAÇÃO E EQUIPE
Struct -> TAD -> Classicos = fila, pilha, lista, arvore, grafo, hash....
 */