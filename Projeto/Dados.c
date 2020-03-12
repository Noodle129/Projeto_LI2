#ifndef LI2G09_STRUCT_FILE_H
#define LI2G09_STRUCT_FILE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dados.h"
#include "logica.h"
#include "Interface.h"

int obter_jogador_atual(ESTADO *estado)(){
    int ja = estado->jogador_atual;
    return ja;
}

int obter_numero_de_jogadas(ESTADO *estado){
    int nj = estado->num_jogadas;
    return nj;
}

COORDENADA obter_ultima_jogada(ESTADO *estado){
    COORDENADA uj = estado->ultima_jogada;
    return uj;
}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){
    CASA *tabu = e->tab;
    CASA casa = tabu[c.coluna][c.linha];
    return casa;
}
/*
 * Esta função deverá criar um estado vazio (com o tabuleiro inicializado)
 * obter_jogador_atual Esta função permite obter o número do jogador atual
 * obter_estado_casa Esta função permite obter o estado atual da casa
 * obter_numero_de_jogadas Esta função permite obter quantas jogadas
 * foram efetuadas (cada jogada tem o movimento de dois jogadores)
*/

ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e->jogador_atual = 1;
    e->num_jogadas = 0;
    e->jogadas;
    e->tab = {{VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO},
              {VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO},
              {VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO},
              {VAZIO,VAZIO,VAZIO,VAZIO,BRANCA,VAZIO,VAZIO,VAZIO},
              {VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO},
              {VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO},
              {VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO},
              {VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO,VAZIO}};
    return e;

}



#endif //LI2G09_STRUCT_FILE_H