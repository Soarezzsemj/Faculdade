cmake_minimum_required(VERSION 3.10)
project(Faculdade C)

set(CMAKE_C_STANDARD 99)

# -------- Tema 02 - Fracao --------
add_executable(fracao_exec
        Estrutura-de-dados/Tema\ 02/Fracao/main.c
        Estrutura-de-dados/Tema\ 02/Fracao/fracao.c
)

# -------- Tema 03 - PesquisaSequencialGols --------
add_executable(pesquisa_exec
        Estrutura-de-dados/Tema\ 03/16-03/PesquisaSequencialGols/main.c
        Estrutura-de-dados/Tema\ 03/16-03/PesquisaSequencialGols/equipe.c
)

# -------- Tema 04 - Lista --------
add_executable(lista_exec
        Estrutura-de-dados/Tema\ 04/Lista/Main.c
        Estrutura-de-dados/Tema\ 04/Lista/Lista.c
)

# -------- Tema 05 - Lista --------
add_executable(temacinco_exec
        Estrutura-de-dados/Tema\ 05/main022.c
)