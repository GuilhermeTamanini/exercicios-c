#include <math.h>
#include <stdio.h>
#include <string.h>

// 1
//  int main(void){
//      int number1;
//      int number2;

//     printf("Digite um numero: ");
//     scanf("%i", &number1);
//     printf("Digite outro numero: ");
//     scanf("%i", &number2);

//     if(number2 > number1){
//         printf("O numero %i e o maior!", number2);
//     } else{
//         printf("O numero %i e o maior!", number1);
//     }
//     return 0;
// }

// 2
//  int main(void){
//      int number;

//     printf("Digite um numero positivo ou negativo: ");
//     scanf("%i", &number);

//     if(number >= 0) {
//         printf("O numero %i e positivo!", number);
//     } else {
//         printf("O numero %i e negativo!", number);
//     }

//     return 0;
// }

// 3
//  int main(void) {
//      int n;

//      printf("Digite um numero: ");
//      scanf("%i", &n);
//      fflush(stdin);

//     if(n % 2 == 0) {
//         printf("O numero %i e par", n);
//     } else {
//         printf("O numero %i e impar", n);
//     }

//     return 0;
// }

// 4 talvez
// int main(void)
// {
//     int n;

//     printf("Digite um numero: ");
//     scanf("%i", &n);

//     if(n % 2 == 0) {
//         printf("%i", n + 1);
//     } else {
//         printf("%i", n +1);
//     }

//     return 0;
// }

// 5

// 6
//  int main(void){
// 	// variáveis
// 	char sexo;
	
// 	// entrada
// 	printf("Digite o sexo (f/m): ");
// 	scanf("%c",&sexo);
// 	fflush(stdin);
	
// 	// processamento e saída
// 	switch(sexo){
// 		case 'f': case 'F':
// 			printf("Feminino\n");
// 			break;
// 		case 'm': case 'M':
// 			printf("Masculino\n");
// 			break;
// 		default:
// 			printf("Sexo invalido\n");
// 	}
	
// 	return 0;
// }

// 7
// int main(void) {
//     char letra[50];

//     printf("Digite M ou F : ");
//     scanf("%s", &*letra);

//     if(strcmp(letra, "M") == 0) {
//         printf("Sexo masculino");
//     } else if(strcmp(letra, "F") == 0) {
//         printf("Sexo feminino");
//     } else {
//         printf("Indefinido");
//     }

//     return 0;
// }

// int main() {
//     char character;

//     printf("Digite uma letra de A a Z: ");
//     scanf("%c", &character);
    
//     if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
//         printf("%c é uma vogal.\n", character);
//     } else {
//         printf("%c é uma consoante.\n", character);
//     }

//     return 0;
// }

//8
int main(void) {
    int n1, n2, n3;

    printf("Digite um numero: ");
    scanf("%i", &n1);
    fflush(stdin);
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    fflush(stdin);
    printf("Digite outro numero: ");
    scanf("%i", &n3);
    fflush(stdin);

    if(n1 > n2 && n1 > n3) {
        if(n2> n3) {
            printf("%i,%i,%i",n1,n2,n3);
        } else {
            printf("%i,%i,%i",n1,n3,n2);
        }
    } else if(n2 > n1 && n2 > n3) {
        if(n1 > n3) {
            printf("%i,%i,%i",n2,n1,n3);
        } else {
            printf("%i,%i,%i",n2,n3,n1);
        } 
    } else if(n3 > n1 && n3 > n2) {
        if(n1 > n2) {
            printf("%i,%i,%i",n3,n1,n2);
        } else {
            printf("%i,%i,%i",n3,n2,n1);
        }
    } else if(n1 == n2 && n1 == n3){
        printf("Todos os numeros sao iguais");
    } else if(n1 == n2) {
        
    }
    
    return 0;
}

// 9
// int main(void){
//     float n1;
//     float n2;
//     float n3;
//     float media;

//     printf("Digite sua primeira nota :");
//     scanf("%i", n1);
//     printf("Digite sua segunda nota: ");
//     scanf("%i", &n2);
//     printf("Digite sua terceira nota: ");
//     scanf("%i", &n3);

//     if (media == 10){
//         printf("Aprovado com distincao");
//     }
//     else if (media >= 7) {
//         printf("Aprovado");
//     } else {
//         printf("Reprovado");
//     }

//     media = (n1 + n2 + n3) / 3;

//     return 0;
// }

// 10
// int main(void){
//     int a1;
//     int a2;
//     int a3;
//     int a4;
//     int media;


//     printf("Digite a idade do primeiro aluno: ");
//     scanf("%i", &a1);
//     printf("Digite a idade do segundo aluno: ");
//     scanf("%i", &a2);
//     printf("Digite a idade do terceiro aluno: ");
//     scanf("%i", &a3);
//     printf("Digite a idade do quarto aluno: ");
//     scanf("%i", &a4);

//     media = (a1 + a2 + a3 + a4) / 4;

//     if (media > 40){
//         printf("Turma idosa");
//     }
//     else if (media > 25 && media < 40){
//         printf("Turma adulta");
//     } else {
//         printf("Turma jovem");
//     }

//     return 0;
// }

//11
int main(void) {

    return 0;
}