//
// Created by soarezz on 11/05/2026.
// imprime os elementos de uma matriz usando ponteiro variavel

#include <stdio.h>
#include <stdlib.h>

int main(){

    static int M[5] = {92,81,70,69,58};
    int i, *p = M; // inicializou o ponteiro p int e com o nome da matriz -> M
    for (i = 0; i < 5; i++)
    {
        printf("M[%d]\n", *(p++));
        // com o ponteiro sendo inicializado com o *p = M, so precisa passar ele e incrementar
        // agora pode usar "p" nos lugare do programa que usa M, e como "p" é um ponteiro variavel e nao constante
        // a gnt pode usar expressao como *(p++)
        //o ponteiro p contem o endereço do primeiro elemento da matriz &M[0]

    }



    return 0;
};