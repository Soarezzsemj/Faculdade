//
// Created by soarezz on 3/5/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva uma função que leia o arquivo cujo nome fora passado como parâmetro e retorne um
// vetor com os nomes dos alunos que obtiveram nota média maior ou igual a 7. A título de exemplo,
// para o arquivo alunos.cvs a seguir, a função deverá retornar {“Carlos”, “Fernanda”}.


int main() {

    FILE *fp = fopen("alunos.csv", "r");

    if (fp == NULL) {
        printf("erro ao abrir o arquivo");
        exit(1);
    }

    char nomes[32];
    float nota1;
    float nota2;
    float media;


    char linha[100];
    fgets(linha, sizeof(linha), fp); // pula: Nome,Nota1,Nota2

    printf("Nome do aluno\tNota1\tNota2\n");

    while (fscanf(fp, " %[^,],%f,%f", nomes, &nota1, &nota2) == 3) {



         media = (nota1 + nota2) / 2;

        printf("Nome: %s\tNota1: %.2f\tNota2: %.2f media: %.2f\n", nomes, nota1, nota2, media);

        if (media >= 7) {
            printf("Alunos que passaram: %s \t \n", nomes);
        }


    }


    fclose(fp);

    return 0;
}