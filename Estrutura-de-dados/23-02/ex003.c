//
// Created by Soarezz on 2/23/26.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    system("clear");

    FILE * A;

    A = fopen("arquivo.txt", "w");


    fprintf(A, "Hello, World!\n");


    if (A == NULL) {
        printf("erro: arquivo nao pode ser aberto");
        exit(1);
    }

    for ( int i = 1; i <= 1000 ; i++ ) {
        fprintf(A, "7 * %d = %d\n", i, 7 * i);
    }



    return 0;

}