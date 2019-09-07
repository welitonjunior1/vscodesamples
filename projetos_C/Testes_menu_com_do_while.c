printf(" -------------------------------------------------\n"); #include <stdio.h>
#include <locale.h>//biblioteca de idiomas para acertar o assentuação
#include <stdlib.h>//funções básicas do sistema


int numero;
int resposta;

int main(int argc, char *argv[]){
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");

	
	do{
		do{	
	system("cls");
	printf("Sistemas \n\n");
	printf("1 - windowsn");
	printf("2 - linuxn");
	printf("Escolha uma das opçôes\n");
	scanf("%d", &numero);

	
	switch(numero){
		case 1:
			system("cls");
			printf("iniciando windows...\n");
			break;
		case 2:
			system("cls");
			printf("iniciando o linux...\n");
			break;
		default:
			printf("Escolha uma das opções a cima \n");
			system("pause");
	}
		}
	while(numero !=1 && numero !=2);
		//O comando printf mostra na tela as opções 1 e 2 e pede para o usuário digitar umas das opões
	printf("\n1 - novo calculo\n");
	printf("2 - Sair\n");
	printf("Digíte a opção desejada: ");
	//scanf armazena a informação na variavel resposta para fazer o teste logico
	scanf("%d", &resposta);
	}
	/*while faz o teste logico do resultado da varialvel resposta. tudo que for diferente de !=2 ele vai executar
	 o programa novamente até a opção por a 2 ae ele sai*/
	while(resposta !=2);
	// a linha abaixo pausa o programa esperando uma tecla para poder continuar
	system("pause");
	return 0;
}
