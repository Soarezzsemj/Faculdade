//
// Created by Soarezz on 24/03/2026.
//

// Faça um que abra um arquivo HTML e elimine todas as “tags” do texto, ou seja, o programa deve
// gerar um novo arquivo em disco que elimine todas as tags HTML, que são caracterizadas por
// comandos entre “<>”. Veja abaixo um exemplo de um texto em HTML e do texto que deverá ser
// gerado pelo programa após eliminar as tags Html



#include <stdio.h>
#include <stdlib.h>
int main() {

    FILE *arquivo = fopen("arquivo.html", "r");
    char str[1000];
    int i;
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo HTML");
        exit(1);
    }

    while (fgets(str, sizeof(str), arquivo) != NULL) {

        int i = 0;

        while (str[i] != '\0') {

            if (str[i] == '<') {
                while (str[i] != '>' && str[i] != '\0') {
                    i++;
                }
                if (str[i] == '>') i++; // pula o '>'
            } else {
                printf("%c", str[i]);
                i++;
            }
        }
    }

    fclose(arquivo);



    return 0;
}