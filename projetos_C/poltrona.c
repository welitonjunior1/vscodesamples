#include <stdio.h>
#include <locale.h>//biblioteca de idiomas para acertar o assentuação
#include <stdlib.h>//funções básicas do sistema
#include <time.h>//biblioteca de tempo

int menuDesconto;
int total;
int poltrona =1;
int integral, meia, gratis;
int opcaoSaida;
int menuInicio;
int menuSaida;
int numero, numero1;
int diaSecao =1;
int secao;

int main(int argc, char *argv[])
{
	
 	//void imprimaDataHora(void);
		//A linha abaixo configura o idioma para português
		setlocale(LC_ALL,"Portuguese");
		printf("digite p");
		scanf("%d", poltrona);

	
	 	if(poltrona <= 0) 
		{
			do
			{
				system("cls");
				printf("Poltrona indisponivel\n\n");
				printf(" -------------------------------------------------\n"); 
				printf("1 para escolher outra seção\n");
				printf("2 para sair\n\n");
				scanf("%d",&numero1);
				if(numero1!=1 && numero1!=2)
				{
					printf("Dígite umas das duas opções você dígitou %d\n", numero1);
					system("pause");
				}
			}
			while(numero1!=1 && numero1!=2);
			if(numero1 !=2)
			{
				poltrona +=10;
				diaSecao ++;	
			}			
		}
		else if(poltrona <=3)
		{
			system("cls");
			printf("Seção %d\n\n",diaSecao);
			printf(" -------------------------------------------------\n"); 
			printf("Ultimas poltronas\n");
			printf("Temos mais %d poltronas disponiveis\n", poltrona);
			
			system("pause");						
		}
		else if(poltrona <=6)
		{	
			system("cls");
			printf("Seção %d\n\n",diaSecao);
			printf(" -------------------------------------------------\n"); 	
			printf("Temos mais %d poltronas disponiveis\n", poltrona);
			secao +=3;
			system("pause");					
		}
		else if(poltrona <=8)
		{	
			system("cls");
			printf("Seção %d\n\n",diaSecao);
			printf(" -------------------------------------------------\n"); 
			printf("Temos mais %d poltronas disponiveis\n", poltrona);
			secao +=2;
			system("pause");					
		}		
		else
		{	
			system("cls");
			printf("Seção %d\n\n",diaSecao);
			printf(" -------------------------------------------------\n"); 			
			printf("Temos mais %d poltronas disponiveis\n", poltrona);
			secao +=1;
			system("pause");
			system("cls");
		}

		if(secao !=2 && secao !=3)
		{
			printf("Manhã\n");
		}
		else if(secao !=1 && secao != 3)
		{
			printf("Tarde\n");	
		}
		else if(secao !=1 && secao !=2)
		{
			printf("noite\n");			
		}	
		
		system("pause");
}
	


