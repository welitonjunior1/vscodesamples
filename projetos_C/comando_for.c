//for números de lacos de repetições finitas 

#include <stdio.h>
#include <locale.h>//biblioteca de idiomas para acertar o assentuação
#include <stdlib.h>//funções básicas do sistema

int numero;
int contador=0;

int main(int argc, char *argv[]){
	
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");
	
	printf("tabuada\n\n");
	printf("Digíte um número da tabuada:");
	scanf("%d",&numero);
	//a linha a baixo gera um laço finito
	for(contador=0;contador<=10;contador++){
		
		printf("%d x %d = %d\n",numero,contador, numero*contador);
	} 
	system("pause");
	return 0;
}
