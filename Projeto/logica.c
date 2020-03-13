#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dados.h"
#include "logica.h"
#include "Interface.h"
#define BUF_SIZE 1024

int verifica_jogada(ESTADO *e,COORDENADA c){
    COORDENADA coord = {c.coluna-1,c.linha+1};
    if (obter_estado_casa(e,coord) == VAZIO) {
        COORDENADA uj = obter_ultima_jogada(e);
        int col = c.coluna;
        int l = c.linha;
        int minl = uj.linha - 1;
        int maxl = uj.linha + 1;
        int minc = uj.coluna - 1;
        int maxc = uj.coluna + 1;
        if((col>=minc) && (col<=maxc) && (l>=minl) && (l<=maxl))
            return 1;
        else {
            printf("Esta jogada não é valida\n");
            return 0;
        }
    }else{
        printf ("Esta jogada não é valida\n");
        return 0;}
}

ESTADO *atualiza_tabuleiro(ESTADO *e, COORDENADA c){
    COORDENADA uj = e->ultima_jogada;
    int col = uj.coluna;
    int l = uj.linha;
    e->tab[l][col] = PRETA;
    e->tab[c.linha][c.coluna]=BRANCA;
    return e;
}

int atualiza_jogador (ESTADO *e) {
    int j;
    if (e->jogador_atual == 1) j++;
    else j;
}


ESTADO atualiza_estado(ESTADO *e, COORDENADA c){
    ESTADO *estado;
    estado = &((ESTADO){.tab = atualiza_tabuleiro(e,c),
            .ultima_jogada = c,
            .jogadas = atualiza_jogadas (e,c),
            .num_jogadas += 1,
            .jogador_atual = atualiza_jogador(e)});
    return estado;
}


// Função que deve ser completada e colocada na camada da lógica do programa
ESTADO *jogar(ESTADO *e, COORDENADA c) {
    printf("jogar %d %d\n", c.coluna, c.linha);
    int valido = verifica_jogada(e,c);
    if(valido==1)
        e = atualiza_tabuleiro(e,c);
    return e;
}