//O comando do_while tem la�os de repeti��es infinitos com teste log�co

#include <stdio.h>
#include <locale.h>//biblioteca de idiomas para acertar o assentua��o
#include <stdlib.h>//fun��es b�sicas do sistema

//nas linhas abaixo s�o as variaveis globais do sistema ficam sempre antes do main
int numero;
int contador=0;
int resposta;
int numero2;
int main(int argc, char *argv[]){
	
	// o "do" faz o comendo do la�o infinito de repeti��es e dentro dele est� as intru��es da repeti��o que no caso � a tabuada
	do
	{
		//A linha abaixo configura o idioma para portugu�s
		setlocale(LC_ALL,"Portuguese");
		//a linha de comando a baixo limpa a tela
		system("cls");
		// a linha abaixo mostra la tela o conte�do entre as aspas
		printf("tabuada\n\n");
		printf("Dig�te um n�mero da tabuada: ");
		//a linha abaixo pega a informa��o digitada pelo usu�rio e coloca dentro da variavel n�mero
		// o & comercial server para mostrar pro sistema que � pra inserir o conteudo na variavel seguinde dele
		//%d � o tipo da variavel op��o inteiro
		numero2 += 15;
		scanf("%d",&numero);
		//a linha a baixo gera um la�o finito de 0 a 10 na variavel contador
		for(contador=0;contador<=10;contador++){
		/*%d s�o os tpos da variaveis o \n serve para pular a linha no comando, numero � uma variavel, 
		contador � outa variavel numero*contador j� est� executando a multiplica��o de um pelo outro	*/
		printf("%d x %d = %d\n",numero,contador, numero*contador);	
	} 
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
	printf("o valor � %d\n",numero2);
	system("pause");
	//a linha abaixo emite o retorno de erros 
	return 0;
}
