#include <stdio.h>//Cabe�alho da biblioteca pad�o da lingungem C
#include <locale.h>//biblioteca de idiomas para acertar a assentua��o
#include <stdlib.h>//Fun��es basica do sistema

int num1;
int num2;
int soma;
int main(int argc, char *argv[])
{
	setLocale(LC_ALL,"Portuguese");
		
	printf("Digite dois n�meros para fazermos a soma!\n ");
	scanf("%d %d", &num1,&num2);

	
	num1 = num2;
	
	 printf("%d", num1);
	
	system("pause");
}
