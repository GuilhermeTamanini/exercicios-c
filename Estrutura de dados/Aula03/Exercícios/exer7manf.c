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
    if (name[0] >= 'a' && name[0] <= 'z') {
        name[0] -= 32;
    }
    
    printf("%s", name);
}