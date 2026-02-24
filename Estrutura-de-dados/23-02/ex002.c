//
// Created by Soarezz on 2/23/26.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    system("clear");

    FILE * A;

    A = fopen("aa.txt", "r");


    fprintf(A, "Hello, World!\n");


    if (A == NULL) {
        printf("erro: arquivo nao pode ser aberto");
        exit(1);
    }

    fclose(A);



    return 0;

}