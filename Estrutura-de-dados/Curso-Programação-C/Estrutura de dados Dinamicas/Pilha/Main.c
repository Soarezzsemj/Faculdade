//
// Created by t069734063 on 25/05/2026.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia, mes, ano;
}Data;

typedef struct {
    char nome[50];
    Data data;
}Pessoa;


// isso que é a estrutura de um nó, tem a Pessoa que é da struct de cima e ele cria meio q uma "recursividade" no struct no *prox, ele se aponta caso criamos outro dado
typedef struct no {
    Pessoa p;
    struct no *proximo; // o *prox aponta para a struct no, que tem a pessoa p, ou seja cria infinitamente se quiser empilhar
}No;

Pessoa ler_pessoa() {
    Pessoa p;

    printf("\n Digite o nome e data de nascimento dd mm aaaa: \n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
};

void imprime_pessoa(Pessoa p) {
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
};

//função para a operação push (empilhar)

//ela retorna o ponteiro de No*, que é o nome da struct que tem dentro o struct no *proximo;
No* empilhar(No *topo) {
    No *novo = malloc(sizeof(No));
    //o *novo é uma variavel de tipo ponteiro para o No, ele retorna para o No

    if (novo) {
        novo->p = ler_pessoa(); // os dados irao ser passados par a função ler_pessoa e vai atribuindo ao p
        novo -> proximo = topo; // o novo seta proximo recebe o topo, pq quado vai adicionando mais elementos a pilha ele tem q entender que o topo é o novo elemento adicionado
        // ponteiro *topo -> item 2/ponteiro nó -> item 1/ponteiro nó -> null
        // adicionamos mais um elemento, o item 3, o ponteiro de topo deixa de estar setado ao item 2 e passa para o item 3,
        // novo->poximo = topo; o novo elemento que seta o proximo é atribuido ao topo
        // ponteiro *topo -> item 3/ponteiro nó -> item 2/ponteiro nó -> item 1/ponteiro nó -> null
        return novo;
        // quando der sucesso vai retornar o novo com o elemento novo

        //se o if for verdadeiro ele vai ler os dados de uma pessoa e vai salvar em novo -> p
        // e novo -> proximo vai apontar para novo nó e retorna //novo// que é o nó, que vai para o case 1 q é atribuido a topo,
        // quando vier um novo elemento o primeiro vai continuar sendo nulo pq  o No *topo == null

    }else {
        printf("\nerro ao alocar memoria!\n");
        return NULL;
    };

}

//  **topo é o ponteiro do ponteiro de topo ->
No* desempilhar(No **topo) {
    if (*topo != NULL) {
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }else {
        printf("\nPilha vazia\n");
        return NULL;
    }



}

void imprimir_pilha(No *topo) {
    printf("\n===== PILHA =====\n");
        while (topo) {
            imprime_pessoa(topo->p);
            topo = topo->proximo;
        }

    printf("\n===== FIM DA PILHA =====\n");
}


int main() {

    No *remover ,*topo = NULL; // nó de topo, sempre começa com nulo pois nao tem nada
    int opcao;

    do {
        printf("\n0 - sair\n1 - empilhar\n2 - desempilhar\n3 - imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                topo = empilhar(topo);
                break;

            case 2:
                remover = desempilhar(&topo);
                if (remover) {
                    printf("\nElemento removido com sucesso\n");
                    imprime_pessoa(remover -> p);
                }else {
                    printf("\nSem nó a remover\n");
                }

                break;

            case 3:
                imprimir_pilha(topo);

                break;

            default:
                if (opcao != 0) {
                    printf("\nopcao infalida!!!\n");
                }
        }

    }while(opcao!=0);




    return 0;
}



