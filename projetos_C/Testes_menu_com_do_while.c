printf(" -------------------------------------------------\n"); #include <stdio.h>
#include <locale.h>//biblioteca de idiomas para acertar o assentua��o
#include <stdlib.h>//fun��es b�sicas do sistema


int numero;
int resposta;

int main(int argc, char *argv[]){
	//A linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL,"Portuguese");

	
	do{
		do{	
	system("cls");
	printf("Sistemas \n\n");
	printf("1 - windowsn");
	printf("2 - linuxn");
	printf("Escolha uma das op��es\n");
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
			printf("Escolha uma das op��es a cima \n");
			system("pause");
	}
		}
	while(numero !=1 && numero !=2);
		//O comando printf mostra na tela as op��es 1 e 2 e pede para o usu�rio digitar umas das op�es
	printf("\n1 - novo calculo\n");
	printf("2 - Sair\n");
	printf("Dig�te a op��o desejada: ");
	//scanf armazena a informa��o na variavel resposta para fazer o teste logico
	scanf("%d", &resposta);
	}
	/*while faz o teste logico do resultado da varialvel resposta. tudo que for diferente de !=2 ele vai executar
	 o programa novamente at� a op��o por a 2 ae ele sai*/
	while(resposta !=2);
	// a linha abaixo pausa o programa esperando uma tecla para poder continuar
	system("pause");
	return 0;
}
