#include <stdio.h>
#include <stdlib.h>

void escreva(int *l, int *c, char *m);

int main(void){
	int linha, coluna;
	char mensagem[30];
	
	printf("Digite a quantidade de linhas: ");
	scanf("%i",&linha);
	printf("Digite a quantidade de colunas: ");
	scanf("%i",&coluna);
	fflush(stdin);
	printf("Digite a mensagem: ");
	
	gets(mensagem);
	
	escreva(&linha,&coluna,mensagem);
	
	return 0;
}

void escreva(int *l, int *c, char *m){
	system("cls");
	for(int i=1;i<=*l;i++){
		printf("\n");
	}
	for(int i=1;i<=*c;i++){
		printf(" ");
	}
	printf("%s",m);
}