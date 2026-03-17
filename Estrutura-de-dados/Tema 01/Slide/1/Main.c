//
// Created by Soarezz on 17/03/2026.
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    FILE *arq;

    arq = fopen("arquivo.txt","w");

    fprintf(arq, "batata\n");

    fclose(arq);

    return 0;
}