//essas linha a baixo chama as bibliotecas
#include <stdio.h>//definição de entrada e saída
#include <stdlib.h>//funções básicas do sistema
#include <locale.h>//biblioteca de idiomas para acertar o assentuação

void main(){
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");
	//A linha abaixo muda a cor do texto
	system("color A");
	//Para pintar a cor do fundo colocar system("color E4"); e que é o fundo amarelo e o 4 é a cor do texto em vermelha
	//Mostra na tela olá mundo
	printf("\n olá mundo \n");
	//essa linha de comando faz com que o programa espere uma tecla para continuar a execução
	system("pause");
	//o comando abaixo limpa a tela
	//system("cls");
	
	//A linha abaixo retorna o número de erros na tela no caso é o 0
	//return 0;
	

}
