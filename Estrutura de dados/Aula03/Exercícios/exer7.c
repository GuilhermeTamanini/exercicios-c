#include <stdio.h>
#include <stdlib.h>

void scanName(char *name);

int main(void) {
    char name[30];

    printf("Digite o nome: ");
    gets(name);
    fflush(stdin);

    scanName(name);

    return 0;
}

void scanName(char *name) {
    for (int i = 0; i < *name; i++) {
        if (name[i] == 0) {
            name[i] == name[i] - 32;
        }
    }
    printf("%s", name);
}