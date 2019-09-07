#include <stdio.h>
#include <locale.h>
void main(void){
	
	setlocale(LC_ALL,"Portuguese");//comando para colocar pra funcionar a acentuaçõa no programa
	int i;
	int nota[5]={2, 0};//aqui é um vetor com 5 valores e já estou acresentando 2 no primeiro e o 2 no segundo.
	
//	nota [0] = 10;
//	nota [1] = 5;
//	nota [2] = 4;
//	nota [3] = 2;
//	nota [4] = 7;
	
	printf("opção1 %i\n",nota[0]);
					
	for ( i = 0; i < 5; i++){
		printf("%i\n", nota[i]);
	}				
}
