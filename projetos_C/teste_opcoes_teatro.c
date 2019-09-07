#include <stdio.h>
#include <locale.h>//biblioteca de idiomas para acertar o assentuação
#include <stdlib.h>//funções básicas do sistema
#include <time.h>//biblioteca de tempo


int menuInicio;
int total;
int menuSaida;
int poltrona =10;
int integral, meia, gratis;


int main(int argc, char *argv[])
{
	void imprimaDataHora(void);
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");
	system("color f0");
	do
	{
		do
		{	
			system("cls");
			printf("Sistemas de vendas de ingresso para o teatro\n\n");
			printf("Escolha uma das opçôes\n");
			printf("1 - Sem descontos\n");
			printf("2 - 50%%\n");
			printf("3 - 100%%\n");
			printf("4 - sair\n");
			scanf("%d", &menuInicio);
			switch(menuInicio)
			{
					case 1:
						system("cls");
						imprimaDataHora();
						printf("\n  Valor: R$ 30,00\n\n");
						total += 30;
						poltrona --;
						printf("  Poltrona: %d\n\n",poltrona);
						integral ++;
						system("pause");
						break;
					case 2:
						system("cls");
						imprimaDataHora();
						printf("\n  Valor: R$ 15,00\n\n");
						total += 15;
						poltrona --;
						printf("  Poltrona: %d\n\n",poltrona);
						meia ++;
						system("pause");
						break;
					case 3:
						system("cls");
						imprimaDataHora();
						printf("\n  Ingresso gratuito bom esperaculo\n\n");
						poltrona --;
						printf("  Poltrona: %d\n\n",poltrona);
						gratis ++;
						system("pause");
						break;
					case 4:	
						system("cls");
						printf("Você apertou para sair deseja mesmo sair?\n\n");
						system("pause");
						break;
					default:
						printf("Escolha uma das opções a cima \n\n");
						system("pause");
			}
		}
		
		while(menuInicio !=1 && menuInicio !=2 && menuInicio !=3 && menuInicio !=4);
			
			do
			{
				system("cls");
				printf("\n      Menu \n\n");
				printf("1 - Fazer outra venda\n");
				printf("2 - Fechar o caixa\n");
				scanf("%d",&menuSaida);
				
				if(menuSaida !=1 && menuSaida !=2)
				{
					printf("Digite umas das duas opções você digitou %d\n", menuSaida);
					system("pause");
				}	
				
			}
			while(menuSaida !=1 && menuSaida !=2);
		}
		while(menuSaida !=2);
	
			system("cls");
			printf("Fechamento de caixa\n");
			imprimaDataHora();
			printf("\nIngressos com preço integrais vendidos: %d\n",integral);
			printf("Ingressos com 50%% de desconto vendidos: %d\n",meia);
			printf("Ingressos com 100%% de desconto vendidos: %d\n",gratis);
			printf("\n\nTotal de poltronas livres: %d\n\n", poltrona);
			printf("O valor total: R$ %d,00\n\n",total);	
		
			return 0;
}

//estou criando a função de data e hora
void imprimaDataHora(void)
{
	
	struct tm funcao_data= {0};
    time_t tempo_data;

    time(&tempo_data);
    funcao_data = *localtime(&tempo_data);

    puts("  Ticket\n");
    printf("  DIA: %d/%d/%d ",funcao_data.tm_mday,funcao_data.tm_mon+1,funcao_data.tm_year+1900);
   

    printf("  HORA: %d:%d:%d \n",funcao_data.tm_hour,funcao_data.tm_min,funcao_data.tm_sec);
    
    
}








