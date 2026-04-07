//
// Created by Soarezz on 06/04/2026.
//

#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int N);

int main() {
    int Numero;
        printf("Digite um numero: ");

        scanf("%d", &Numero);

            if (ehPrimo(Numero)) printf("%d eh primo.\n", Numero);

            else printf("%d nao eh primo.\n", Numero);

        return 0;
}

// Função que retorna 1 se for primo e 0 se não for
int ehPrimo(int N) {
    int contador = 0;
    if (N <= 1) return 0;
    for (int i = 2; i <= N; i++) {
        contador++;
        printf("contador = %d.\n", contador);
        if (N % i == 0)
            return 0;
    }
    return 1; // Esse retorno só ocorrerá se todos os if (acima) falharem.
}
