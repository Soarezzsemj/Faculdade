//
// Created by soarezz on 11/05/2026.
// imprime os elementos de uma matriz usando notação ponteiro

#include <stdio.h>
#include <stdlib.h>

int main(){

    static int M[5] = {92,81,70,69,58};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("M[%d]\n", *(M + i)  ); // notacao do ponteiro, o *(m+i) tem o mesmo valor de M[1]// notação de uma matriz M[i], i = indice, M = nome da matriz
        // M + i é equivalente a &M[i], portanto *(M + i) é equivalente a M[i]
    }


    return 0;
};