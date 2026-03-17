//
// Created by Soarezz on 17/03/2026.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *dados = fopen("dados.csv", "r");
    int id, idade;
    char nome[50];

    char linha[100];
    fgets(linha, sizeof(linha), dados); // pula primeira linha

    printf("ID\tNOME\tIDADE\n");
    while (fscanf(dados, "%d,%49[^,],%d", &id, nome, &idade) == 3) {

        printf("%d\t%s\t%d\n", id, nome, idade);

    }

    // Lê e exibe cada linha do arquivo
    // while (fgets(linha, sizeof(linha), dados) != NULL) {
    //     printf("%s", linha);
    // }


    fclose(dados);

    return 0;
}