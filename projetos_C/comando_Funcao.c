#include <stdio.h>
//inicio do programa
int main (){
	
	//declarei uma fun��o de data e hora pra ser executada dentro do meu programa.
	void imprimaMensagem(void);
	// aqui esta lendo o conteudo dentro da fun��o que � o texto 
	imprimaMensagem();
	//estou mostrando na tela "espaco" para separar as fun��es em momentos diferentes do meu codigo
	printf("espaco\n");
	//aqui estou lendo a fun��o em outro momento do meu codigo ja que ele esta declarado la em cima posso chamar em varios lugares diferentes
	imprimaMensagem();
	system("pause");
	return 0;
}
//estou criando a fun��o de data e hora
void imprimaMensagem(void){
	
	printf("teste\n");
}
