//
// Created by Soarezz on 25/03/2026.
//

#include <stdio.h>
#include <stdlib.h>

int main () {

    system("cls");

    printf("Criando pastas\n");
    system("mkdir semestre2026_1\\metodos"); // cria a pasta semestre 2026_1 e a metodos dentro
    printf("Entrando na pasta\n");
    system("cd semestre2026_1\\metodos"); // entra na pasta semestre e dps na metodos
    printf("criando arquivo nota.txt\n");
    system("type nul > semestre2026_1\\metodos\\notas.txt"); // cria o arquivo notas.txt dento da pasta metodos
    system("dir"); // lista as pastas


    return 0;
}