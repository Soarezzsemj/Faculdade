//
// Created by Soarezz on 17/03/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo = fopen("arquivoint.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo");
        exit(1);
    }

    char nome[50];
    int numero;

    fscanf(arquivo, "%d %[^\n]", &numero, nome);

    printf("Numero: %d, Nome: %s ", numero, nome );

    fclose(arquivo);

    return 0;
}