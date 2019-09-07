#include <stdio.h>//Cabeçalho da biblioteca padão da lingungem C
#include <locale.h>//biblioteca de idiomas para acertar a assentuação
#include <stdlib.h>//Funções basica do sistema

int num1;
int num2;
int soma;
int main(int argc, char *argv[])
{
	setLocale(LC_ALL,"Portuguese");
		
	printf("Digite dois números para fazermos a soma!\n ");
	scanf("%d %d", &num1,&num2);

	
	num1 = num2;
	
	 printf("%d", num1);
	
	system("pause");
}
