//
// Created by Soarezz on 08/04/2026.
//

#ifndef FACULDADE_PESSOAS_H
#define FACULDADE_PESSOAS_H




typedef struct Pessoa {
    int id;
    char nome[100];
    int idade;

} Pessoa;

typedef struct {
    Pessoa *dados; // ISSO É ALOCAÇÃO DINAMICA, VIRA UM VETOR DE PESSOAS = VARIAS PESSOAS
    int tamanho;
    int capacidade;

} ListaPessoas;

void initLista(ListaPessoas *L);
void destruirLista(ListaPessoas *L);
void garantirCapacidade(ListaPessoas *L);
int inserirPessoa(ListaPessoas *L, Pessoa p);
Pessoa* buscarPessoaPorId(ListaPessoas *L, int id);
int atualizarIdade(ListaPessoas *L, int id, int novaIdade);
int removerPessoaPorId(ListaPessoas *L, int id);
void imprimirLista(const ListaPessoas *L);



#endif //FACULDADE_PESSOAS_H