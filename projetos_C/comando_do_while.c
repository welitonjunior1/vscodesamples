//O comando do_while tem laços de repetiçôes infinitos com teste logíco

#include <stdio.h>
#include <locale.h>//biblioteca de idiomas para acertar o assentuação
#include <stdlib.h>//funções básicas do sistema

//nas linhas abaixo são as variaveis globais do sistema ficam sempre antes do main
int numero;
int contador=0;
int resposta;
int numero2;
int main(int argc, char *argv[]){
	
	// o "do" faz o comendo do laço infinito de repetições e dentro dele está as intruções da repetição que no caso é a tabuada
	do
	{
		//A linha abaixo configura o idioma para português
		setlocale(LC_ALL,"Portuguese");
		//a linha de comando a baixo limpa a tela
		system("cls");
		// a linha abaixo mostra la tela o conteúdo entre as aspas
		printf("tabuada\n\n");
		printf("Digíte um número da tabuada: ");
		//a linha abaixo pega a informação digitada pelo usuário e coloca dentro da variavel número
		// o & comercial server para mostrar pro sistema que é pra inserir o conteudo na variavel seguinde dele
		//%d é o tipo da variavel opção inteiro
		numero2 += 15;
		scanf("%d",&numero);
		//a linha a baixo gera um laço finito de 0 a 10 na variavel contador
		for(contador=0;contador<=10;contador++){
		/*%d são os tpos da variaveis o \n serve para pular a linha no comando, numero é uma variavel, 
		contador é outa variavel numero*contador já está executando a multiplicação de um pelo outro	*/
		printf("%d x %d = %d\n",numero,contador, numero*contador);	
	} 
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
	printf("o valor é %d\n",numero2);
	system("pause");
	//a linha abaixo emite o retorno de erros 
	return 0;
}
