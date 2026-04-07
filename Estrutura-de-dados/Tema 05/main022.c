#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    int key;
    struct Item * next;
} Item;

typedef struct
{
    int tamanho;
    Item * inicio;

} lista;



// Protótipos
Item * createitem(int key);
void exibirlista(Item *I); // Removi o 'tamanho' para torná-la mais flexível
int contapares(Item * inicio);
lista *criarlista();



int main () {
    // system("clear");

    Item * A = createitem(40);
    Item * B = createitem(87);
    Item * C = createitem(43);
    Item * D = createitem(22);

    lista * teste = criarlista();
    // Encadeamento lógico
    A->next = C;
    C->next = D;
    D->next = B;
    B->next = NULL; // Opcional, mas boa prática reforçar o fim

    exibirlista(A);

    printf("\nQuantidade de elementos pares: %d\n", contapares(A));

    // Lembre-se de liberar a memória depois!
    return 0;
}

Item * createitem(int key) {
    Item *I = (Item *)malloc(sizeof(Item));
    if (I == NULL) {
        printf("Erro ao alocar memoria");
        return NULL;
    }
    I->key = key;
    I->next = NULL;
    return I;
}

void exibirlista(Item *I) {
    Item * atual = I;
    printf("\n--- Estrutura da Lista ---\n");
    printf("Endereço \t Valor \t Próximo\n");

    while (atual != NULL) {
        // Usando %p para ponteiros e atual-> para pegar o valor do nó corrente
        printf("%p \t %d \t %p\n", (void*)atual, atual->key, (void*)atual->next);
        atual = atual->next;
    }
}

int contapares(Item * inicio) {
    int contador = 0;
    while (inicio != NULL) {
        if (inicio->key % 2 == 0) contador++;
        inicio = inicio->next;
    }
    return contador;
}



lista *criarlista()
{
     

}

