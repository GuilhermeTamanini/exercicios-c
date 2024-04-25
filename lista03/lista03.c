//2
// #include <stdio.h>

// int main(){
//     int n1, n2, i;
    
//     printf("Digite um numero :");
//     scanf("%i", &n1);
//     fflush(stdin);
    
//     printf("Digite outro numero :");
//     scanf("%i", &n2);
//     fflush(stdin);

//     if(n1 > n2) {
//         for(i = n2 + 1; i < n1; i ++) {
//             if(i % 2 == 0) {
//             printf("%i", i);
//             }
//         }
//     } else {
//         for(i = n1 + 1; i < n2; i ++) {
//             if(i % 2 == 0) {
//             printf("%i", i);
//             }
//         }
//     }

//     return 0;
// }

//4
#include <stdio.h>
int main (void) {
    int qtn, i;

    printf("Digite o numero de turmas :");
    scanf("%i", &qtn);
    fflush(stdin);

    int notas[qtn];

    printf("Digite %i: ", qtn);
    for(i = 1; i < qtn; i ++) {
        printf("Numero %i", i + 1);
        scanf("%i", &notas[i]);
    }

    printf("Os numeros digitados sao:\n");
    for(int i = 0; i < qtn; i++) {
        printf("%d\n", notas[i]);
    }
      
    return 0;
}

//6
#include <stdio.h>

int main(void) {
    float media, valor, soma = 0;
    int qtd, i;
    
    printf("Digite a quantidade de CDS :");
    scanf("%i", &qtd);
    fflush(stdin);
    
    for(i = 1; i <= qtd; i++) {
        printf("Digite o valor do CD %i: ", i);
        scanf("%f", &valor);
        fflush(stdin);
        
        soma += valor;
    }
    
    media = soma / qtd;
    
    //processamento
    printf("Valor total investido foi: %f\n Media dos CDS: %f", soma, media);

    return 0;
}

//7
#include <stdio.h>

int main(void) {
    float pa, pb, i;
    pb = 200000;
    int anos = 0;

    for(pa = 80000; pa <= pb; i *= 1.03) {
        pa *= 1.03;
        pb *= 1.015;
        anos ++;
    }
    
    printf("%i", anos);
    
    return 0;
}

//9
#include <stdio.h>

int main(void) {
    int n1 = 100, n2 = 200, i, soma = 0;

    char opcao;
	
	// entrada
	do{
		system("cls");
		
		// saída
		for(i=1;i<=10;i++){
            if(i % 2 ==2) {
                soma += i;
            }
		}
		
		printf("Deseja realizar novamente (s/n): ");
		scanf("%c",&opcao);
		fflush(stdin);
	}while (opcao == 's');
    
    return 0;
}

//10
#include <stdio.h>

int main(void) {
    int n1 = 100, n2 = 200, i, soma = 0;

    char opcao;
	
	// entrada
	do{
		
		// saída
		for(i=n1;i<=n2;i++){
            if(i % 2 ==0) {
                soma += i;
            }
		}
		
		printf("soma: %i", soma);
		
		printf("Deseja realizar novamente (s/n): ");
		scanf("%c",&opcao);
		fflush(stdin);
	}while (opcao == 's');
    
    return 0;
}