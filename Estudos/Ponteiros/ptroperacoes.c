//
// Created by Soarezz on 07/05/2026.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int x=12, y=3;
    unsigned int *px, *py;

    px = &x; //atribuições
    py = &y;

    if (px<py) { //comparação
        printf("py-px= %u\n", (py-px)); //subtração
    }else {
        printf("px-py= %u\n", (px-py));
    }

    printf("px = %p\n", px);
    printf(", *px = %u\n", *px);
    printf(", &px = %p\n", &px);

    printf("py = %p\n", py);
    printf(", *py = %u\n", *py);
    printf(", &py = %p\n", &py);


    py++; // incremento

    printf("py = %p\n", py);
    printf(", *py = %u\n", *py);
    printf(", &py = %p\n", &py);

    px = py + 5; // somar inteiros

    printf("px = %p\n", px);
    printf(", *px = %u\n", *px);
    printf(", &px = %p\n", &px);


    return 0;
}