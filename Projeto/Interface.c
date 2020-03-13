#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dados.h"
#include "logica.h"
#include "Interface.h"
#define BUF_SIZE 1024

void imprimePeca(CASA c){
    if(c==VAZIO)
        printf(".");
    if(c==PRETA)
        printf("#");
    if(c==BRANCA)
        printf("*");
}

void mostrar_tabuleiro(ESTADO *e) {
    for (int i = 0; i <8 ; i++) {
        for (int j = 0; j < 8; j++) {
            if(i==0 && j==7 && (e->tab[i][j] == VAZIO))
                printf("2");
            else {
                if (i == 7 && j == 0 && (e->tab[i][j] == VAZIO))
                    printf("1");
                else imprimePeca(e->tab[i][j]);
            }
        }
        printf("\n");
    }
}

// Função que deve ser completada e colocada na camada de interface
int interpretador(ESTADO *e) {
    char linha[BUF_SIZE];
    char col[2], lin[2];
    if (fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if (strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(e);
    }
    return 1;
}