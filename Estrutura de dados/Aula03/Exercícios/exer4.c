#include <stdio.h>
#include <stdlib.h>

//Protótipo de função
void calcFact(double *v, double *r);

int main(void) {
    //Variáveis
    double v, r;

    //Entrada
    printf("Digite o valor para calcular o fatorial: ");
    scanf("%i", &v);

    //Chamada da função pra calcular o fatorial
    calcFact(&v, &r);

    //Saída
    printf("Resultado do fatorial: %i", r);

    return 0;
}

void calcFact(double *v, double *r) {
    *r = 1;
    for (int i = *v; i > 0; i--) {
        *r *= i;
    }
}
