//
// Created by soarezz on 11/05/2026.
//


#include <stdio.h>
#include <stdlib.h>

int main(){

    static int M[5] = {92,81,70,69,58};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("M[%d] = %d\n", i, M[i]); // notação de uma matriz M[i], i = indice, M = nome da matriz
    }


    return 0;
};