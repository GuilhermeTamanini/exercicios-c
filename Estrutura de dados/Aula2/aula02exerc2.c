#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct animal {
    char raca[30], cor[30], sexo;
    float peso;
}Animal;

int main(void) {
    Animal an[TAM];
    
    for (int i=0; i<TAM; i++) {
        printf("Digite a raca: ");
        gets(an[i].raca);
        fflush(stdin);
        
        printf("Digite a cor: ");
        gets(an[i].cor);
        fflush(stdin);
        
        printf("Digite a sexo: ");
        scanf("%c", &an[i].sexo);
        fflush(stdin);
        
        printf("Digite a peso: ");
        scanf("%f", &an[i].peso);
        fflush(stdin);
    }
    
    printf("Raca \tCor \tsexo \tPeso");
    
    for (int i=0; i < TAM; i++) {
        printf("%s\t%s\t%c\t%f", an[i].raca, an[i].cor, an[i].sexo, an[i].peso);
    }
    
    return 0;
}
