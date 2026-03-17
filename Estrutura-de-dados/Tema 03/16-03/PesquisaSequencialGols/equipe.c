//
// Created by Soarezz on 3/16/26.
//

#include "equipe.h"
#include <stdio.h>
#include <stdlib.h>

Equipe * LerDados(char * Arquivo) {
    FILE * fp = fopen(Arquivo, "r");

    if (fp == NULL) {
        printf("ERRO: Nao foi possivel abrir");
        exit(1);
    }

    Equipe * X = malloc(20 * sizeof(Equipe));

    if ( X == NULL ) {
        printf("ERRO: nao tem memoria ram tiozao");
        exit(1);
    }
      char Buffer[100];
    fscanf(fp, "%s", Buffer);

    int N = 0;

    while (fscanf(fp, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d;",
    &X[N].Posicao, X[N].Estado, &X[N].Pontos,&X[N].J,&X[N].V,&X[N].E,&X[N].D,&X[N].GP,&X[N].GC,&X[N].SD)== 11) {
        printf("%s \n", X[N].Estado);
        N++;
    };

    while (fscanf(fp, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d;",
   &X[N].Posicao, X[N].Estado, &X[N].Pontos,&X[N].J,&X[N].V,&X[N].E,&X[N].D,&X[N].GP,&X[N].GC,&X[N].SD)== 11) {
        X[N].Aproveitamento = 100.0 * X[N].Pontos / (3 * X[N].J);
        N++;
   };
    fclose(fp);

};