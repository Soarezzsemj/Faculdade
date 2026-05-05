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


// Protótipos de funções

Item CriarItem(int Chave);


//main
int main() {
    system("clear");

    Item A = CriarItem(137);
    Item B = CriarItem(241);
    Item C = CriarItem(339);
    Item D = CriarItem(422);

    Item V[MAX];

    V[0] = A;
    V[1] = B;
    V[2] = C;
    V[3] = D;

    for (int i = 0; i < MAX; i++) {
        printf("Chave do item %d: %d\n", i + 1, V[i].Chave);
    }

    return 0;
}

//implementação das operaçoes(funções)

Item CriarItem(int Chave){

    Item I;
    I.Chave = Chave;
    return I;

}

