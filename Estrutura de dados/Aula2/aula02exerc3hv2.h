typedef struct peca{
	int codigo;
	char nome[30], cor[30];
	float peso, preco;
}Peca;

Peca entrada(void);
void saida(Peca a);

Peca entrada(void){
	Peca a;
	printf("Digite codigo: ");
	scanf("%i",&a.codigo);
	fflush(stdin);
	printf("Digite nome: ");
	gets(a.nome);
	fflush(stdin);
	printf("Digite cor: ");
	gets(a.cor);
	fflush(stdin);
	printf("Digite peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	printf("Digite preco: ");
	scanf("%f",&a.preco);
	fflush(stdin);
	return a;
}

void saida(Peca a){
	printf("%i\t%s\t%s\t%f\t%f\n",a.codigo,a.nome,a.cor,a.peso,a.preco);
}
