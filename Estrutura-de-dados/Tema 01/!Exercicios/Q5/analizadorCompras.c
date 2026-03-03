//
// Created by Soarezz on 3/2/26.
//


#include <stdio.h>
#include <stdlib.h>


int main() {

    //TEMA 1

    FILE * fp = fopen("compras.txt", "r");
    if (fp == NULL) {
        printf("o arquivo nao pode ser aberto");

        exit(1);
    }

    char produto[32];
    int quantidade;
    float preco;
    int contador = 1;
    float subtotal = 0.0;


    //fscanf(fp, "%[^,\n] %d %f", produto, &quantidade, &preco);

    while (fscanf(fp, "%[^,], %d, %f", produto, &quantidade, &preco) == 3) {

        float total = quantidade * preco;

      printf("%d) %s : %d * %.2f = %.2f \n", contador, produto, quantidade, preco, total);
        contador++;
       subtotal = total + subtotal;



    };
    printf("o total da sua compra foi de, %.2f ", subtotal);



    fclose(fp);

    return 0;
}