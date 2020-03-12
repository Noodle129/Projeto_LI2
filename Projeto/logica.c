#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dados.h"
#include "logica.h"
#include "Interface.h"
#define BUF_SIZE 1024


int verifica_jogada(ESTADO *e,COORDENADA c){
    if (obter_estado_casa(e,c) == VAZIO) {
        COORDENADA uj = obter_ultima_jogada(e);
        int col = c.coluna;
        int l = c.linha;
        if((uj.coluna >= (col - 1)) && (uj.coluna <= (col +1)) && (uj.linha >= (l - 1)) && (uj.linha <= (l +1)))
            return 1;
    }
    else return 0;
}

// Função que deve ser completada e colocada na camada da lógica do programa
int jogar(ESTADO *e, COORDENADA c) {
    printf("jogar %d %d\n", c.coluna, c.linha);
    int valido = verifica_jogada(e,c);
    if(valido)
        atualiza_tabuleiro(e,c);
    return 1;
}