#include <stdio.h>
#include <stdlib.h>

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

Peca entrada(void) {
    Peca a;

    printf("Digite o codigo: ");
    scanf("%i", &a.codigo);
    fflush(stdin);
    
    printf("Digite um nome: ");
    gets(a.nome);
    fflush(stdin);

    printf("Digite a cor: ");
    gets(a.cor);
    fflush(stdin);
    
    printf("Digite o peso: ");
    scanf("%i", &a.peso);
    fflush(stdin);

    printf("Digite o preco: ");
    scanf("%i", &a.preco);
    fflush(stdin);

    return a;
}

void saida(Peca a) {
    printf("%i\t%s\t%szt%f\t%f\n", a.codigo, a.nome, a.cor, a.peso, a.preco);
}