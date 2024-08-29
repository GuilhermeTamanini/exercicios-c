#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int *x1, *x2, a, b, c, delta;
    delta = (b * b) - 4 * (a * c);

    printf("Digite o valor de a: ");
    scanf("%i", &a);

    printf("Digite o valor de b: ");
    scanf("%i", &b);

    printf("Digite o valor de c: ");
    scanf("%i", &c);

    x1 = ((-1 * b) + sqrt(delta)) / (2 * a);
    x2 = ((-1 * b) - sqrt(delta)) / (2 * a);

    printf("x1: %i \nx2: %i", *x1, *x2);

    return 0;
}