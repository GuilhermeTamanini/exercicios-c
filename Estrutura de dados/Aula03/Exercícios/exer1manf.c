#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equacao(float *x1, float *x2, float a, float b, float c);

int main(void) {
    float X1, X2, A, B, C;

    printf("Digite o valor de a: ");
    scanf("%f", &A);

    printf("Digite o valor de b: ");
    scanf("%f", &B);

    printf("Digite o valor de c: ");
    scanf("%f", &C);

    equacao(&x1, &x2, A, B, C);

    printf("Os valores sao: \n%f\n%f", X1, X2);

    return 0;
}

void equacao(float *x1, float *x2, float a, float b, float c) {
    float delta = pow(b, 2) - 4 * a * c;
    *x1 = -b + sqrt(delta) / 2 * a;
    *x2 = -b - sqrt(delta) / 2 * a;
}
