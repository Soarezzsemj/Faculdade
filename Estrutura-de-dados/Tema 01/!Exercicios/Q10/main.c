//
// Created by soarezz on 3/15/26.
//

#include <stdio.h>
#include <stdlib.h>

// Implemente uma função que leia o arquivo de clientes (passado como parâmetro) e remova um
// cliente específico baseado no ID fornecido pelo usuário, além de salvar o arquivo atualizado. Para
// esta atividade, o arquivo apresenta a seguinte estrutura:



int main() {

    FILE *clientesCSV = fopen("clientes.csv", "r");

    if (clientesCSV == NULL) {
        printf("Erro na abertura do cliente\n");
    }

    int id;
    char nome[32];
    char email[32];

    char linha[100];
    fgets(linha, sizeof(linha), clientesCSV);

    while (fscanf(clientesCSV, "%d,[^,],[^\n]", &id, nome, email) == 3) {
        printf("%d %s %s", id, nome, email);
    }


    fclose(clientesCSV);

    return 0;
}