#include <stdio.h>
#include <stdlib.h>

void printMsg(int *rows, int *cols, char *msg);

int main(void) {
    int rows, cols;
    char msg[30];

    printf("Digite a quantidade de linhas: ");
    scanf("%i", &rows);

    printf("Digite a quantidade de colunas: ");
    gets(msg);
    fflush(stdin);

    printMsg(&rows, &cols, msg);

    return 0;
}

void printMsg(int *rows, int *cols, char *msg) {
    for (int i = 0; i < *rows; i++) {
        printf("\n");
    }
    for (int j = 0; j < *cols; j++) {
        printf("  ");
    }

    printf("msg: %s", msg);
}