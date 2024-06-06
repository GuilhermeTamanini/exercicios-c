/*
uso de string
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char nome[30];
	
	// entrada
	printf("Digite seu nome: ");
	//scanf("%s",nome);
	gets(nome);
	
	// saída
	printf("Boa noite %s\n",nome);
	for(int i=0;nome[i]!='\0';i++){
		printf("nome[%i]=%c\n",i,nome[i]);
	}
	
	return 0;
}
//3 Construa um algoritimo que leia um vetor de 10 numeros e os retorne em ordem inversa
// #include <stdio.h>

// int main(void) {
//     // variaveis
//     float real[10];

//     // entrada
//     for(int i=0;i<=9;i++) {
//         printf("Digite o numero %i :", i + 1);
//         scanf("%f", &real[i]);
//     }

//     // saida
//     for(int i=9;i>=0;i--) {
//         printf("Numero %i: %.1f \n", i + 1, real[i]);
//     }
//     return 0;
// }

/*
4. Construa um algoritmo que leia um vetor de 10 caracteres, e diga quantas 
consoantes foram lidas. Imprima as consoantes.
R.:
*/
// #include <stdio.h>
// #include <stdlib.h>

// int main(void){
// 	// variáveis
// 	char c[10];
// 	int cont=0;
	
// 	// entrada
// 	for(int i =0;i<=9;i++){
// 		printf("Digite %i caracter: ",i+1);
// 		scanf("%c",&c[i]);
// 		fflush(stdin);
// 	}
	
// 	// processamento e saída
// 	for(int i=0;i<10;i++){
// 		if(c[i]>='a' && c[i]<='z' || c[i]>='A' && c[i]<='Z'){
// 			char a=c[i];
// 			if(a>='A' && a<='Z') a+=32;
// 			if(a!='a' && a!='e' && a!='i' && a!='o' && a!='u'){
// 				printf("c[%i]=%c\n",i,c[i]);
// 				cont++;
// 			}
// 		}
// 	}
// 	printf("Tem %i consoantes\n",cont);
	
// 	return 0;
// }

// como fazer a soma de suas matrizes ordem 3x3?
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int matriz_a[3][3], matriz_b[3][3], matriz_soma[3][3], linha, coluna;
	
	// entrada
	printf("Dados da matriz A\n\n");
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("Digite [%i][%i]: ",linha,coluna);
			scanf("%i",&matriz_a[linha][coluna]);
			fflush(stdin);
		}
	}
	printf("\n\nDados da matriz B\n\n");
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("Digite [%i][%i]: ",linha,coluna);
			scanf("%i",&matriz_b[linha][coluna]);
			fflush(stdin);
		}
	}
	
	// processamento
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			matriz_soma[linha][coluna]=matriz_a[linha][coluna]+
			matriz_b[linha][coluna];
		}
	}
	
	// saída
	printf("\n\nDados da matriz soma\n\n");
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("%i\t",matriz_soma[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}