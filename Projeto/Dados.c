#ifndef LI2G09_STRUCT_FILE_H
#define LI2G09_STRUCT_FILE_H

/*
 *
ESTADO *inicializar_estado();

int obter_jogador_atual(ESTADO *estado);
int obter_numero_de_jogadas(ESTADO *estado);
CASA obter_estado_casa(ESTADO *e, COORDENADA c);
inicializar_estado Esta função deverá criar um estado vazio (com o tabuleiro
inicializado)
obter_jogador_atual Esta função permite obter o número do jogador atual
obter_estado_casa Esta função permite obter o estado atual da casa
obter_numero_de_jogadas Esta função permite obter quantas jogadas
        foram efetuadas (cada jogada tem o movimento de dois jogadores)

*/

#include <stdio.h>
#include "Dados.h"
#include <stdlib.h>

int obter_jogador_atual(ESTADO *estado){
    int j;
    j = estado->jogador_atual;
    return j;
}

int obter_numero_de_jogadas(ESTADO *estado){
    int nj;
    nj = estado->num_jogadas;
    return nj;
}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){
    int col, l, casa;

}

}

// Função que deve ser completada e colocada na camada de dados
ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e->jogador_atual = 1;
    e->num_jogadas = 0;
    return e;


#endif //LI2G09_STRUCT_FILE_H