#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcArea(float *a, float r);

int main(void) {
    float A, R;

    printf("Digite o raio: ");
    scanf("%f", &R);

    calcArea(&A, R);

    printf("A area é %f", A);

    return 0;
}

void calcArea() {
    *a = M_PI * pow(r, 2);
}