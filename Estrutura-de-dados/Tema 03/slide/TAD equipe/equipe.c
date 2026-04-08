//
// Created by Soarezz on 3/16/26.
//

#include "equipe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Equipe* LerDados(const char *NomeArquivo) {
    FILE *fp = fopen(NomeArquivo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo %s\n", NomeArquivo);
        return NULL;
    }

    Equipe *X = malloc(20 * sizeof(Equipe));
    int N = 0;
    char Cabecalho[1024]; // Aumentado por segurança

    // Lê a linha inteira do cabeçalho
    fgets(Cabecalho, sizeof(Cabecalho), fp);

    // Note o espaço antes de %d e a correção de SD para SG
    while (N < 20 && fscanf(fp," %d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d;",
           &X[N].Posicao, X[N].Estado, X[N].Time, &X[N].Pontos,
           &X[N].J, &X[N].V, &X[N].E, &X[N].D, &X[N].GP, &X[N].GC, &X[N].SG) == 11) {

        if (X[N].J > 0) {
            X[N].Aproveitamento = 100 * (float) X[N].Pontos / (float) (3 * X[N].J);
        } else {
            X[N].Aproveitamento = 0;
        }
        N++;
           }

    fclose(fp);
    return X;
}
