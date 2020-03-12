#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dados.h"
#include "logica.h"
#include "Interface.h"
#define BUF_SIZE 1024


// Função que imprime uma unica peça
void imprimePeca(CASA c){
    if(c==VAZIO)
        printf(".");
    if(c==PRETA)
        printf("#");
    if(c==BRANCA)
        printf("*");
}

// Função que deve ser completada e colocada na camada de interface
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

// Função que deve ser colocada no ficheiro main.c
int main() {
    ESTADO *e = inicializar_estado();
    interpretador(e);
    return 0;
}