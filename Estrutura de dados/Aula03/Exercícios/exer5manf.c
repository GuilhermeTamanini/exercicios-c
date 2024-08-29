#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void troca(int *a, int *b);
void ordena(int *n);

int main(void){
	int n[TAM];
	
	for(int i=0;i<TAM;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&n[i]);
	}
	
	ordena(n);
	
	for(int i=0;i<TAM;i++) printf("%i, ",n[i]);
	
	return 0;
}

void troca(int *a, int *b){
	int aux = *a;
	*a=*b;
	*b=aux;
}

void ordena(int *n){
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			if(n[i]<n[j]){
				troca(&n[i],&n[j]);
			}
		}
	}
}