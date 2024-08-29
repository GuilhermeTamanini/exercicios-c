#include <stdio.h>
#include <stdlib.h>

void calcFact(int *v, double *r);

int main(void) {
    double v, r;

    printf("Digite um numero: ");
    scanf("%i", &v);

    calcFact(&v, &r);

    printf("Resultado do fatorial: %lf", r);

    return 0;
}

void calcFact(int *v, double *r) {
    *r = 1;
    for (int i = *v; i > 0; i--) {
        *r *= i;
    }
}
