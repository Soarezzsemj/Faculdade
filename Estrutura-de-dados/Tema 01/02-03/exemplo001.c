//
// Created by Soarezz on 3/2/26.
//

#include  <stdio.h>
#include <stdlib.h>


int main() {

    system("clear");

    FILE * fp = fopen("bd.txt", "r");

    if ( fp == NULL) {
        printf("Arquivo nao pode ser aberto");

        exit(1);
    }

    printf("Arquivo aberto!\n\n ");

    int numero;
    char nome[64];


        while (fscanf(fp,"%d  %[^\n]", &numero, nome) == 2) {
            printf("%d \t %s \n", numero, nome);
        }



    fclose(fp);


    return 0;
}