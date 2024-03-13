//2
// int main(void){
//     printf("---------------------------------------\n");
//     printf("|        Guilherme Tamanini           |\n");
//     printf("| guilherme.tamanini@catolicasc.edu.br|");
        
//     return 0;
// }

//3
// int main(void){
//     float tempF;
    
//     printf("Digite uma temperatura em fahrenheit: ");
//     scanf("%f", &tempF);
    
//     printf("A temperatura F°%f em graus celcius e: %f", tempF, 5 * (tempF -32) /9);
    
//     return 0;
// }

//4
// int main(void){
//     float tempC;
    
//     printf("Digite uma temperatura em celsius: ");
//     scanf("%f", &tempC);
    
//     printf("A temperatura C°%f em graus fahrenheit e: %f", tempC, 9 *(tempC /5) +32);
    
//     return 0;
// }

//5
// int main(void){
//     int intNumber1;
//     int intNumber2;
//     float floatNumber3;
    
//     printf("Digite um numero inteiro: ");
//     scanf("%i", &intNumber1);
//     printf("Digite outro numero inteiro: ");
//     scanf("%i", &intNumber2);
//     printf("Digite um numero real :");
//     scanf("%f", &floatNumber3);
    
//     printf("a:%f \nb:%f \nc:%f \n", (intNumber1 * 2) + (float)(intNumber2 / 2), (intNumber1 * 3) + floatNumber3, floatNumber3 * floatNumber3 * floatNumber3 );
    
//     return 0;
// }

//7
// int main(void){
//     float meters;
   
//     printf("Digite um valor em metros: ");
//     scanf("%f", &meters);
   
//     printf("O numero %f para centimetros e: %f", meters, meters * 100);
   
//     return 0;
// }

//8
// int main(void){
//     int number1;
//     int number2;
    
//     printf("Digite um numero: ");
//     scanf("%i", &number1);
//     printf("Digite outro numero: ");
//     scanf("%i", &number2);
    
//     printf("A soma entre %i e %i e: %i",number1, number2, number1 + number2);
    
//     return 0;
// }

//9
// int main(void){
//     float nota1;
//     float nota2;
//     float nota3;
//     float nota4;
    
//     printf("Digite a nota do primeiro bimestre: ");
//     scanf("%f", &nota1);
//     printf("Digite a nota do segundo bimestre: ");
//     scanf("%f", &nota2);
//     printf("Digite a nota do terceiro bimestre: ");
//     scanf("%f", &nota3);
//     printf("Digite a nota do quarto bimestre: ");
//     scanf("%f", &nota4);
    
//     printf("A sua media e: %f", (nota1 + nota2 + nota3 + nota4) / 4);
    
//     return 0;
// }

//10
// int main(void){
//     float horasTrabalhadas;
//     float salarioHora;
    
//     printf("Digite quantas horas trabalhou esse mes :");
//     scanf("%f", & horasTrabalhadas);
//     printf("Digite quantos voce ganha por hora trabalhada: ");
//     scanf("%f", & salarioHora);
    
//     printf("O seu salario desse mes foi: %f", horasTrabalhadas * salarioHora);
    
//     return 0;
// }

//11
// int main(void){
//     float diasTrabalhados;
    
//     printf("Digite quantos dias trabalhou esse mes: ");
//     scanf("%f", &diasTrabalhados);
    
//     printf("O seu salario desse mes e: %f", (25 * diasTrabalhados) - ((25 * diasTrabalhados) * 0.08) );
    
//     return 0;
// }

//12
// int main(void){
//     int cv20;
//     int cv1;
//     int cv5;
//     int mach;
    
//     printf("Digite quantos motor(es) deseja comprar: ");
//     scanf("%i", &mach);
    
//     printf("A quantidade de motores cv20, cv1, cv5 sao respectivamente: %i, %i, %i \nTotal: %i \nCusto por motor cv20, cv1, cv5 sao respectivamente: %i, %i, %i", mach, mach * 2, mach * 3, (1500 + 600 + 1800) * mach,mach * 1500, (mach * 2) * 300, (mach * 3) * 600);
    
//     return 0;
// }

//13
// int main(void){
//     float altura;
//     float largura;
//     float metros;
    
//     printf("Digite a altura da parede: ");
//     scanf("%f", &altura);
//     printf("Digite a largura da parede: ");
//     scanf("%f", &largura);
    
//     metros = largura * altura;

//     printf("A quantidade necessaria de latas de tinta e: %f", (metros / 3) / 3.6  );
    
//     return 0;
// }

//14
// int main(void){
//     float salario;
    
//     printf("Digite seu salario bruto mensal: ");
//     scanf("%f", &salario);
    
//     printf("Salario bruto  :R$%f \n(-) IR         :R$%f \n(-) INSS:      :R$%f \n(-) Sindicato  :R$%f \nSalario liquido:R$%f",salario,salario *0.15, salario * 1.1, salario *0.03, salario - (salario * 0.29) );
  
//     return 0;
// }
