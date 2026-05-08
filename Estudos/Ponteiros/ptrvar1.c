//
// Created by Soarezz on 07/05/2026.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x,y;
    int *px = &x; // inicializa px com o endereço de x

    *px = 14; // o mesmo que x = 4;
    y = *px; // o mesmo que y = x

    printf("y = %d\t", y);

    return 0;
}