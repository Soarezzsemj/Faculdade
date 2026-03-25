//
// Created by Carlos Eduardo on 23/03/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

Lista * CriarLista (int C ) {

    Lista * L = malloc(sizeof(Lista));

    if (L == NULL ) return NULL;
    L->Capacidade = C;
    L->Tamanho = 0;
    L->Dados = (Tarefa *) malloc (C * sizeof(Tarefa));

    if (L->Dados == NULL ) {
        free(L);
        return NULL;
    }
    return L;
}


