#include <stdio.h>

// Dado abstrato do ponto
typedef struct ponto {
    int x,y;
}Ponto;

// Prototipo das funcoes
Ponto entrada(void);
void imprimir(Ponto a);

int main(void) {
    Ponto bd[5];
    
    //bd[0].x = 3;
    //Entrada de dados
    for (int i = 0; i<5; i++) {
        printf("dados do ponto $i: \n\n", i+1);
        bd[i] = entrada();
        system("cls");
    }

    //saída de dados
    for (int i = 0; i<5; i++) {
        imprimir(bd[i]);
    }
    
    return 0;
}

//Função de entrada
Ponto entrada(void) {
    Ponto a;
    printf("Digite x: ");
    scanf("%i", &a.x);

    printf("Digite y: ");
    scanf("%i", &a.y);

    return a;
}

//Função de saída
void imprimir(Ponto a) {
    printf("x=%i \ty=%i", a.x, a.y);
}