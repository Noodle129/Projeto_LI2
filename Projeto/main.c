#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dados.h"
#include "logica.h"
#include "Interface.h"
#define BUF_SIZE 1024

// Função que deve ser colocada no ficheiro main.c
int main() {
    ESTADO *e = inicializar_estado();
    interpretador(e);
    return 0;
}