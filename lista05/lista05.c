//1. Faça um programa que leia um número, passe este número como parâmetro para uma função que retorne 0 se o número for par ou 1 se o número for ímpar.
#include <stdio.h>

int isOdd(int num) { return (num % 2 == 0 ? 0 : 1); }

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    printf("Numero par: 0\nNumero impar: 1\nNumero: %i", isOdd(num));

    return 0;
}

// 2. Faça uma função que desenhe linhas de caracteres na tela, a função  receberá como argumento o tipo de caractere e o número de linhas que deverá  imprimir.
#include <stdio.h>

int printLine(int lines, char caracType) {
    for(int i=0; i<lines; i++) {
        for(int j=0; j<10; j++) {
            printf("%c", caracType);
        }
        printf("\n");
    }
}

int main() {
    int lines;
    char caracType;

    printf("Digite um numero de linhas: ");
    scanf("%i", &lines);

    printf("Digite o tipo de caracter: ");
    scanf("%c", &caracType);

    printLine(lines, caracType);

    return 0;
}

/* 3. Fazer um programa que possibilite várias opções de cálculos a partir de um
 menu. O programa chamará a função correspondente a cada cálculo.
 [ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
 [ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
 [ c ] S = 1000/1 - 997/2 + 994/3.........
 [ d ] S = 480/10 - 475/11 + 470/12 - .......
 [ f ] FIM
 Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.*/

int main() {
    char option, v = 1;

    do{
        printf("\n[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
        printf("[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10\n");
        printf("[ c ] S = 1000/1 - 997/2 + 994/3........\n");
        printf("[ d ] S = 480/10 - 475/11 + 470/12 - .......\n");
        printf("[ f ] FIM\n");

        printf("Digite uma opcao: ");
        scanf("%c", &option);
        fflush(stdin);
        if(option >= 'a' && option <= 'f') {
            switch (option){
                case 'a':
                    for(int i=1; i<=50; i++) {
                        printf("%i/%i", v, i);
                        v += 2;
                        if(i != 50) printf(" + ");
                    }
                    break;
                case 'b':
                    for(int i=1; i<=10; i++) {
                        printf("%i/%i", i, i);
                        if(i != 10) printf(" - ");
                    }
                    break;
                default:
                    printf("Opcao invalida");
                    break;
                }
        }
    } while(option != 'f');
}