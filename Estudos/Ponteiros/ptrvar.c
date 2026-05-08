//
// Created by Soarezz on 07/05/2026.
//

#include <stdio.h>
#include <stdlib.h>


// uso de ponteiros na função main

int main() {

    int x = 4, y = 7;
    int *px,*py;

    printf("&x = %p\t x = %d\n", &x, x);
    printf("&y = %p\t y = %d\n", &y, y);

    px = &x; // atribui ao ponteiro *px um endereço valido, q é x ( 4)
    py = &y;

    printf("&px = %p\t*px = %d\n", px, *px);
    printf("&py = %p\t*py = %d\n", py, *py);

    return 0;
}
