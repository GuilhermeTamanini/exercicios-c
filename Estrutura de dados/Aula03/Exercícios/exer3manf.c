#include <stdio.h>
#include <stdlib.h>

void sum(int *x, int *y, int *r);
void dif(int *x, int *y, int *r);
void mult(int *x, int *y, int *r);

int main(void) {
    int X, Y, R;

    printf("Digite o valor de X: ");
    scanf("%i", &X);
    
    printf("Digite o valor de Y: ");
    scanf("%i", &Y);

    sum(&X, &Y, &R);

    printf("R: %i\n", R);

    dif(&X, &Y, &R);

    printf("R: %i\n", R);

    mult(&X, &Y, &R);

    printf("R: %i\n", R);

    return 0;
}

void sum(int *x, int *y, int *r) {
    *r = *x + *y;
}

void dif(int *x, int *y, int *r) {
    *r = *x - *y;
}

void mult(int *x, int *y, int *r) {
    *r = *x * *y;
}