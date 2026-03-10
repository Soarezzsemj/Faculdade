//
// Created by soarezz on 3/2/26.
//

// Escreva um programa que solicite do usuário os nomes de 2 arquivos texto para, a seguir, criar um
// terceiro arquivo, também texto, com o conteúdo dos dois arquivos fornecidos (o conteúdo do
// primeiro arquivo seguido do conteúdo do segundo arquivo).


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

        char nome1[100], nome2[100], nome3[100];
        FILE *fp1, *fp2, *fp3;
        int c;

        // Ler nomes dos arquivos
        printf("Digite o nome do primeiro arquivo: ");
        scanf("%s", nome1);

        printf("Digite o nome do segundo arquivo: ");
        scanf("%s", nome2);

        printf("Digite o nome do terceiro arquivo (saida): ");
        scanf("%s", nome3);

        // Abrir arquivos de leitura
        fp1 = fopen(nome1, "r");
        if (fp1 == NULL) {
            printf("Erro ao abrir o primeiro arquivo.\n");
            exit(1);
        }

        fp2 = fopen(nome2, "r");
        if (fp2 == NULL) {
            printf("Erro ao abrir o segundo arquivo.\n");
            fclose(fp1);
            exit(1);
        }

        // Criar arquivo de saída
        fp3 = fopen(nome3, "w");
        if (fp3 == NULL) {
            printf("Erro ao criar o terceiro arquivo.\n");
            fclose(fp1);
            fclose(fp2);
            exit(1);
        }

        // Copiar conteúdo do primeiro arquivo
        while ((c = fgetc(fp1)) != EOF) {
            fputc(c, fp3);
        }

        // Copiar conteúdo do segundo arquivo
        while ((c = fgetc(fp2)) != EOF) {
            fputc(c, fp3);
        }

        // Fechar arquivos
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);

        printf("Arquivos unidos com sucesso!\n");

        return 0;

}

