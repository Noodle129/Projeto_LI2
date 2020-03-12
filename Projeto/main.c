#include <stdio.h>
#include "Dados.h"
#include "Dados.h"
#include "Interface.h"
#include "logica.h"

int main() {
    ESTADO *e = inicializar_estado();
    interpretador(e);
    return 0;
}
