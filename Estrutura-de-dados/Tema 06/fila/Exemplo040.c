//
// Created by Soarezz on 04/05/26.
//


#include <stdio.h>
#include <stdlib.h>

#define MAX 4
//definindo o ITEM da fila

typedef struct Item{
    int Chave;
    struct Item * Proximo; // ponteiro para o próximo item (para filas encadeadas)

} Item;


// definindo a FILA (propriamente dito)

typedef struct{

    struct Item * Inicio; // item do início da fila
    struct Item * Fim; // posição do próximo item a ser inserido (ou seja, o final da fila)
    int Tamanho; // número atual de itens na fila

} Fila;



// Protótipos de funções



Item *CriarItem(int Chave);
Fila *CriarFila();
void DestruirFila(Fila *F);
void Enfileirar(Fila *F, int Chave); // Passando a chave diretamente facilita
void Desenfileirar(Fila *F);
void ExibirFila(Fila *F);



//main
int main() {
    system("clear");



    // criando a fila

    Fila * Exemplo = CriarFila();

    Enfileirar( Exemplo, 137); // 137 é o primeiro elemento enfileirado
    Enfileirar( Exemplo, 241); // 241 é o segundo elemento enfileirado
    Enfileirar( Exemplo, 3339); // 339 é o terceiro elemento enfileirado



    printf("Fila atual:\n");
    ExibirFila(Exemplo);

    printf("\nDesenfileirando...\n");
    Desenfileirar(Exemplo);

    ExibirFila(Exemplo);

    DestruirFila(Exemplo);
    return 0;
}

//implementação das operaçoes(funções)

Item * CriarItem(int Chave){
    Item *novo = (Item *)malloc(sizeof(Item));

    if (novo)
    {
        novo -> Chave = Chave;
        novo -> Proximo = NULL; // O próximo item é inicialmente NULL
    }

    return novo;
};

Fila * CriarFila(){

    Fila *F = (Fila *)malloc(sizeof(Fila));

    if (F){
        F -> Inicio = NULL; // A fila começa vazia, então o início é NULL
        F -> Fim = NULL; // O fim também é NULL inicialmente
        F -> Tamanho = 0; // O tamanho inicial da fila é 0
    };

    return F;


};

void DestruirFila(Fila *F){

    if (F == NULL) {
        return ; // Se a fila já for NULL, não há nada a destruir
        free(F); // Liberar a memória alocada para a fila
    }


};

void Enfileirar(Fila *F, int Chave){

    Item *novo = CriarItem(Chave);

    if (novo == NULL) return; // Verificar se a alocação foi bem-sucedida

    if (F->Fim == NULL)
    {
        F->Inicio = novo; // Se a fila estava vazia, o início agora é o novo item
        F->Fim = novo; // O fim também é o novo item
    } else
    {
        F->Fim->Proximo = novo; // O próximo do item atual do fim aponta para o novo item
        F->Fim = novo; // O fim agora é o novo item


    };
    F->Tamanho++; // Incrementa o tamanho da fila


};

void Desenfileirar(Fila *F){

    if (F->Inicio == NULL) return; // A fila está vazia, não é possível desenfileirar

    Item *temp = F->Inicio; // guarda o item que vai ser movidoexec, hyprctl dispatch fullscreen 1
    F -> Inicio = F->Inicio->Proximo; // O início agora é o próximo item da fila

    if (F->Inicio == NULL) // Se a fila ficou vazia após desenfileirar, o fim também deve ser NULL
    {
        F->Fim = NULL;
    };

    free(temp); // libera a memoria

    F->Tamanho--; // Decrementa o tamanho da fila



};

void ExibirFila(Fila *F){

    Item *atual = F->Inicio; // vai printar do inicio da fila

    int pos = 1; // para mostrar a posição do item na fila

    while (atual != NULL)
    {
        printf("Chave do Item %d: %d\n", pos++, atual -> Chave);
        atual = atual -> Proximo; // avança para o próximo item

    }


};


//int felizPorVOceBB() lindoooooooo - isaias


/*
Struct -> TAD -> TAD FRAÇÃO E EQUIPE
Struct -> TAD -> Classicos = fila, pilha, lista, arvore, grafo, hash....
 */