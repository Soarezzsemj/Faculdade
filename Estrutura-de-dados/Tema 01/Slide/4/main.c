//
// Created by Soarezz on 17/03/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo = fopen("saida.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo");
        exit(1);
    }

    const char *mensagem = "Mensagem com fput"; // tem que fazer um const char apontado para a mensagem
    fputs(mensagem, arquivo);

    fclose(arquivo);

    return 0;
}