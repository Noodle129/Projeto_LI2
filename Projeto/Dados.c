#ifndef LI2G09_STRUCT_FILE_H
#define LI2G09_STRUCT_FILE_H
#include <stdio.h>
#include "Dados.h"
#include <stdlib.h>
#include <string.h>
#include "Dados.h"
#include "logica.h"
#include "Interface.h"

// Função que converte a coordenada de forma a que a mesma seja apresentada como desejamos.
COORDENADA converte_coordenada(COORDENADA c){
    c.linha = 7 - c.linha;
    return c;
}

// Função que determina a forma como é inicializado o estado.
ESTADO *inicializar_estado()
{
    ESTADO *estadoinicial;

    estadoinicial = &((ESTADO){.tab = {
            {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
            {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
            {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
            {VAZIO, VAZIO, VAZIO, VAZIO, BRANCA, VAZIO, VAZIO, VAZIO},
            {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
            {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
            {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
            {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO}},
            .ultima_jogada = {4, 3},
            .jogadas = {},
            .num_jogadas = 0,
            .jogador_atual = 1});
    return estadoinicial;
}

// Função que determina o jogador atual
int obter_jogador_atual(ESTADO *estado){
    int ja = estado->jogador_atual;
    return ja;
}

// Função que determina o número de jogadas efetuadas
int obter_numero_de_jogadas(ESTADO *estado){
    int nj = estado->num_jogadas;
    return nj;
}

// Função que determina a coordenada da última jogada
COORDENADA obter_ultima_jogada(ESTADO *estado){
    COORDENADA uj = estado->ultima_jogada;
    return uj;
}

// Função que determina o estado da casa (VAZIO, BRANCA, PRETA)
CASA obter_estado_casa(ESTADO *e, COORDENADA c){
    CASA cestado = e->tab[c.coluna][c.linha];
    return cestado;
}

#endif //LI2G09_STRUCT_FILE_H