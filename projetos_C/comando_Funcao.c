#include <stdio.h>
//inicio do programa
int main (){
	
	//declarei uma função de data e hora pra ser executada dentro do meu programa.
	void imprimaMensagem(void);
	// aqui esta lendo o conteudo dentro da função que é o texto 
	imprimaMensagem();
	//estou mostrando na tela "espaco" para separar as funções em momentos diferentes do meu codigo
	printf("espaco\n");
	//aqui estou lendo a função em outro momento do meu codigo ja que ele esta declarado la em cima posso chamar em varios lugares diferentes
	imprimaMensagem();
	system("pause");
	return 0;
}
//estou criando a função de data e hora
void imprimaMensagem(void){
	
	printf("teste\n");
}
