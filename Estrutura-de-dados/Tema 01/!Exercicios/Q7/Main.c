//
// Created by soarezz on 3/10/26.
//

// Escreva uma função, usando a linguagem C padrão, que leia o arquivo cujo nome é passado como
// parâmetro e calcule a retorne a soma de todos os elementos da coluna Quantidade. Um exemplo
// de arquivo é mostrado a seguir:

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *vendas = fopen("Vendas.csv", "r");

    if (vendas == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    char produto[64];
    int quantidade;
    float preco;
    int soma = 0;

    char linha[100];

    // pula o cabeçalho
    fgets(linha, sizeof(linha), vendas);

    while (fscanf(vendas, "%63[^,],%d,%f\n", produto, &quantidade, &preco) == 3) {
        soma += quantidade;
    }

    printf("Soma total da coluna Quantidade: %d\n", soma);

    fclose(vendas);

    return 0;
}