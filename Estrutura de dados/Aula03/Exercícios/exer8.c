#include <stdio.h>
#include <stdlib.h>

void upperName(char *name);

int main(void) {
    char name[30];

    printf("Digite o nome: ");
    gets(name);
    fflush(stdin);

    upperName(name);

    return 0;
}

void upperName(char *name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] -= 32;
        }
    }
    
    printf("%s", name);
}