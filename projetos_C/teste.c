//essas linha a baixo chama as bibliotecas
#include <stdio.h>//defini��o de entrada e sa�da
#include <stdlib.h>//fun��es b�sicas do sistema
#include <locale.h>//biblioteca de idiomas para acertar o assentua��o

void main(){
	//A linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL,"Portuguese");
	//A linha abaixo muda a cor do texto
	system("color A");
	//Para pintar a cor do fundo colocar system("color E4"); e que � o fundo amarelo e o 4 � a cor do texto em vermelha
	//Mostra na tela ol� mundo
	printf("\n ol� mundo \n");
	//essa linha de comando faz com que o programa espere uma tecla para continuar a execu��o
	system("pause");
	//o comando abaixo limpa a tela
	//system("cls");
	
	//A linha abaixo retorna o n�mero de erros na tela no caso � o 0
	//return 0;
	

}
