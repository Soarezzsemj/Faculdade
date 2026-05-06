//
// Created by Soarezz on 05/05/2026.
//

#include <stdio.h>
#include <stdlib.h>



// Prototipo da função
void troca(int *, int *);


// a main

int main() {

    int a,b;
    printf("Digite dois numeros: \n");
    scanf("%d %d",&a,&b); // recebe os numeros e atribui aos int

    printf("INVERTENDO\n");

    troca(&a,&b); // manda para a função void troca()

    printf("%d %d",a,b); // printa a função trocada

    return 0;



};

// função de troca

void troca(int *x, int *y) {

    int temporario;
    temporario = *x;
    *x = *y;
    *y = temporario;
};
