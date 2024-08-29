#include <stdio.h>
#include <stdlib.h>
#include "aula02exerc3v3h.h"

typedef struct peca {
    int codigo;
    char nome[30], cor[30];
    float peso, preco;
}Peca;

Peca entrada(void);
void saida(Peca a);

int main(void) {
    saida(entrada());

    return 0;
}