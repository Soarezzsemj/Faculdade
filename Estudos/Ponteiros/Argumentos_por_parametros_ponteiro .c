//
// Created by Soarezz on 05/05/2026.
//
#include <stdio.h>
#include <stdlib.h>


//prototipo da função

void reajusta20(float *, float *);

// main

int main(){

    float val_preco, val_reaj;

    do{
        printf("\n Insira do preço atual: ");
        scanf("%f", &val_preco);
        reajusta20(&val_preco, &val_reaj); // enviando endereços
        printf("\nO preço novo é %.2f\n", val_preco);
        printf("\nO aumento foi de %.2f\n", val_reaj);
    } while(val_preco != 0.0);

    system("PAUSE");
    return 0;
}


//função
void reajusta20(float *preco, float *reajuste){

    *reajuste = *preco * 0.2;
    *preco *= 1.2;

};