//for n�meros de lacos de repeti��es finitas 

#include <stdio.h>
#include <locale.h>//biblioteca de idiomas para acertar o assentua��o
#include <stdlib.h>//fun��es b�sicas do sistema

int numero;
int contador=0;

int main(int argc, char *argv[]){
	
	//A linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL,"Portuguese");
	
	printf("tabuada\n\n");
	printf("Dig�te um n�mero da tabuada:");
	scanf("%d",&numero);
	//a linha a baixo gera um la�o finito
	for(contador=0;contador<=10;contador++){
		
		printf("%d x %d = %d\n",numero,contador, numero*contador);
	} 
	system("pause");
	return 0;
}
