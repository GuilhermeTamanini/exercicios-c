#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototipos das funcoes
void clean(void); //sem saída / sem entrada
int num(void); // com saída / sem entrada
int sum(int a, int b); //com saída / com entrada
void write(int a); // sem saída / com entrada

int main(void) {
    clean();

    write(sum(3,7));
    write(num());
}

//funcoes
void clean(void) {
    // system("cls");
    // system("color 71");
}

int num(void) { 
    srand(time(NULL));
    return rand() %10+1; 
}

int sum(int a, int b) { return a + b; }

void write(int a) {
    printf("%i\n", a);
}
