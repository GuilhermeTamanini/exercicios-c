/*
8. Faça uma função que leia um texto e converta este texto para maiúscula. 
O texto deve ser passado para função por referência. 
*/
#include <stdio.h>
#include <stdlib.h>

void converta(char *a);

int main(void){
	char mensagem[40];
	
	printf("Digite uma mensagem: ");
	gets(mensagem);
	
	converta(mensagem);
	
	printf("%s\n",mensagem);
	
	return 0;
}

void converta(char *a){
	int i=0;
	while(a[i]!='\0'){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
		i++;
	}
}