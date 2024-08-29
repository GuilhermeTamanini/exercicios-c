#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc(int *x1, int *x2, int a, int b, int c);

int main(void) {
    int x1, x2, a, b, c;
    x1 = 0;
    x2 = 0;

    printf("Digite o valor de a: ");
    scanf("%i", &a);

    printf("Digite o valor de b: ");
    scanf("%i", &b);

    printf("Digite o valor de c: ");
    scanf("%i", &c);

    printf("x1: %i \nx2: %i\n", x1, x2);
    
    calc(&x1, &x2, a, b, c);

    printf("x1: %i \nx2: %i", x1, x2);

    return 0;
}

void calc(int *x1, int *x2, int a, int b, int c) {
    int delta = (b * b) - 4 * (a * c);
    
    *x1 = ((-1 * b) + sqrt(delta)) / (2 * a);
    *x2 = ((-1 * b) - sqrt(delta)) / (2 * a);
};