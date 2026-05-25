//
// Created by soarezz on 11/05/2026.
//

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

float media(float *, int);

int main()
{

    float notas[TAMANHO], m;
    int i = 0;

    do
    {
        printf("digite a nota do aluno %d ", i+1);
        scanf("%f", notas + i);
    }while (*(notas + i++) >= 0.0);

    i--;
    m = media(notas, i);

    printf("media = %.2f\n", m);

    return 0;
};




float media(float *lista, int tamanho)
{

    int i;
    float m=0.0;
    for (i = 0; i < tamanho; i++) m += *(lista++);
    return m/tamanho;


};


