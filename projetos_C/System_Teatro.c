#include <stdio.h>//cabeçalho da biblioteca padrão da linguagem C
#include <locale.h>//biblioteca de idiomas para acertar a assentuação
#include <stdlib.h>//funções básicas do sistema
#include <time.h>//biblioteca de tempo serve para trabalhar com a data e hora atual do sistema

// Declaração de vairiaveis globais
int menuDesconto;
int total;
int poltrona =30;
int integral, meia, gratis;
int opcaoSaida;
int menuInicio;
int menuSaida;
int numero, numero1;
int diaSecao =1;
int secao;
int totalIngressos;
//iniciando o programa
int main(int argc, char *argv[])
{	
 	void imprimaDataHora(void);//Primeira função me trás dia e hora 
 	void impremaPoltrna(void);//Segunda função me trás o número da poltrona e o periodo se é manhã, tarde ou noite.
 	void imprimaPeriodo(void);//terceira função me trás o periodo se é manhã, tarde ou noite.
	
		setlocale(LC_ALL,"Portuguese");	//A linha abaixo configura o idioma para português
		
		system("color f0");// nessa linha de programa eu estou acresentando a cor de fundo e a cor da fonte.
			
	do //Esse "do" sever para que o usuário possa fazer outra venda e retorna aqui pro inicio.
	{
		do //Esse "do" sever para evitar que o usuário não dígite outros valores menuInicio e retorna aqui pro inicio. 
		{
			do //Esse "do" sever para evitar que o usuário não dígite outros valores no menuDesconto e retorna aqui pro inicio. 
			{ 	
				impremaPoltrna();//essa função mostra o status das poltronas. 
				system("cls");// limpa a tela quando chegar nesse ponto 
				printf("\n Sistemas de vendas de ingresso para o teatro\n");//Imprime na tela oque está dentro das aspas na tela. 
				printf("-------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
				printf("Escolha uma das opções\n");//Imprime na tela um menu para o usuário escolher uma opção.
				printf("1-Sem descontos\n");//imprime a 1 opção do menu.
				printf("2-50%%\n");//imprime a 2 opção do menu.
				printf("3-100%%\n");//imprime a 3 opção do menu. 
				printf("4-sair\n");//imprime a 4 opção do menu.
				scanf("%d", &menuDesconto);//Essa linha de comando pega o que o usuário dígitou e coloca dentro da variavel menuDesconto.
								
				switch(menuDesconto)//Essa linha de comando abre o menu de opções com oque o usuário dígitou logo acima.
				{
					case 1://Esse caso é se o usuário dígitar a opção 1 do menu acima ele vai entrar e executar oque está dentro desse caso.
						do //esse "do" para caso o usuário dígitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
						{					
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf("\n Você escolheu a opção sem desconto!!! \n");//confirma a opção escolhida pelo usuário.
							printf("----------------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado. 
							printf("               Escolha uma das opções\n\n");//imprime informando para o usuário escolher uma das duas opções abaixo
							printf(" 1-Efetuar a venda		2-Voltar ao menu de vendas\n");//essa linha de comando da as duas opções possivei que o usuário terá.				
							scanf("%d",&opcaoSaida);//Essa linha de comando pega o que o usuário dígitou e coloca dentro da variavel opcaoSaida.		
							if (opcaoSaida != 1 && opcaoSaida != 2)//essa linha de comando faz a comparação com oque digitada acima.
							{
								system("cls");// limpa a tela quando chegar nesse ponto 
								printf("Dígite umas das duas opções você dígitou %d\n\n\n", opcaoSaida);//Imprime um erro e e pede para dígitar uma opção valida e informa qual tecla a pessoa dígitou.
								system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
							}							
						}
						while(opcaoSaida != 1 && opcaoSaida !=2 );//essa linha de comando faz a comparação com oque digitada acima se nõa for valida ele retorna para escolher outra opção valida.
					
						if(opcaoSaida !=2)//essa linha de comando me trás o resultado 1 que o usuário dígitou acima
						{
							
							menuInicio=1;//acresenta o valor 1 na variável menuInicio para que possa dar continuidade la em baixo.
						}
						else//essa linha de comando serve para se caso oque for dígitado a opção 2 ele executa oque está dentro do else.
						{
							menuInicio=4;//acresenta o valor 4 na variável menuInicio para que possa dar continuidade la em baixo.
						}			
						break;//Esse comando break serve para mostrar para o sistema não executar mais nem um caso e sair do switch ir para proxíma instrução fora do switch.
					case 2://Esse caso é se o usuário dígitar a opção 2 do menu acima ele vai entrar e executar oque está dentro desse caso.
						do //esse "do" para caso o usuário dígitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
						{
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf("\n Você escolheu a opção 50%% de desconto!!!\n");//confirma a opção escolhida pelo usuário.
							printf("----------------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
							printf("                    Escolha uma das opções\n\n");//imprime informando para o usuário escolher uma das duas opções abaixo
							printf("  1-Para uma das 3 opções abaixo	2-Voltar ao menu de vendas\n");//essa linha de comando da as duas opções possivei que o usuário terá.
							printf("  Estudatente\n");//imprime na tela uma das 3 opções validas para efetuar a venda com 50% de desconto.
							printf("  Criança de 2 á 12 anos\n");//imprime na tela uma das 3 opções validas para efetuar a venda com 50% de desconto.
							printf("  Professor da rede pública de ensino\n");//imprime na tela uma das 3 opções validas para efetuar a venda com 50% de desconto.
							scanf("%d",&opcaoSaida);//Essa linha de comando pega o que o usuário dígitou e coloca dentro da variavel opcaoSaida.
							if (opcaoSaida != 1 && opcaoSaida != 2)//essa linha de comando faz a comparação com a com oque digitada acima se for diferente entra e executa o comando abaixo.
							{
								system("cls");// limpa a tela quando chegar nesse ponto 
								printf(" Dígite umas das duas opções você dígitou %d\n\n\n", opcaoSaida);//Imprime um erro e e pede para dígitar uma opção valida e informa qual tecla a pessoa dígitou.
								system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
							}
						}
						while(opcaoSaida != 1 && opcaoSaida != 2);//essa linha de comando faz a comparação com oque digitada e capitado pela variavel opcaoSaida acima se nõa for valida ele retorna para escolher outra opção valida.
						
						if(opcaoSaida !=2)//essa linha de comando me trás o resultado 1 que o usuário dígitou acima
						{		
							menuInicio=2;//acresenta o valor 2 na variável menuInicio para que possa dar continuidade la em baixo.
						}
						else//essa linha de comando serve para se caso oque for dígitado a opção 2 ele executa oque está dentro do else.
						{
							menuInicio=4;//acresenta o valor 4 na variável menuInicio para que possa dar continuidade la em baixo.
						}
						break;//Esse comando break serve para mostrar para o sistema não executar mais nem um caso e sair do switch ir para proxíma instrução fora do switch.
					case 3://Esse caso é se o usuário dígitar a opção 3 do menu acima ele vai entrar e executar oque está dentro desse caso.						
							do //esse "do" para caso o usuário dígitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
							{				
								system("cls");// limpa a tela quando chegar nesse ponto 
								printf("\n Você escolheu a opção 100%% de desconto!!!\n");//confirma a opção escolhida pelo usuário.
								printf("----------------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
								printf("              Escolha uma das opções\n\n");//imprime informando para o usuário escolher uma das duas opções abaixo					
								printf(" 1-Para uma as 2 opções abaixo	   2-Para voltar ao menu de vendas\n");//essa linha de comando da as duas opções possivei que o usuário terá.
								printf(" terça-Feira\n");//imprime na tela uma das 2 opções validas para efetuar a venda com 100% de desconto.
								printf(" criança de baixa renda e da rede pública de ensino?\n");//imprime na tela uma das 2 opções validas para efetuar a venda com 100% de desconto.								
								scanf("%d",&opcaoSaida);//Essa linha de comando pega o que o usuário dígitou e coloca dentro da variavel opcaoSaida.		
								if (opcaoSaida != 1 && opcaoSaida != 2)//essa linha de comando faz a comparação com oque foi digitada na variavel opcaoSaida acima se for diferente ele executa oque está dentro se não ele pula.
								{
									system("cls");// limpa a tela quando chegar nesse ponto 
									printf(" Dígite umas das duas opções você dígitou %d\n\n\n", opcaoSaida);//Imprime um erro e e pede para dígitar uma opção valida e informa qual tecla a pessoa dígitou.
									system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
								}					
							}
							while(opcaoSaida != 1 && opcaoSaida != 2);//essa linha de comando faz a comparação com oque digitada e capitado pela variavel opcaoSaida acima se nõa for valida ele retorna para escolher outra opção valida.						
							if(opcaoSaida !=2)//essa linha de comando me trás o resultado 1 que o usuário dígitou acima
							{
								
								menuInicio=3;//acresenta o valor 3 na variável menuInicio para que possa dar continuidade la em baixo.
							}
							else//essa linha de comando serve para se caso oque for dígitado a opção 2 ele executa oque está dentro do else.
							{
								menuInicio=4;//acresenta o valor 4 na variável menuInicio para que possa dar continuidade la em baixo.
							}
							break;//Esse comando break serve para mostrar para o sistema não executar mais nem um caso e sair do switch ir para proxíma instrução fora do switch.
					case 4://Esse caso é se o usuário dígitar a opção 4 do menu acima ele vai entrar e executar oque está dentro desse caso.	
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf(" Você escolheu a opção sair deseja mesmo sair?\n");////imprime um alerta infomando que o usuário digitou a opção de sair.
							printf("----------------------------------------------------------\n\n\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
							system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
								menuInicio=4;//acresenta o valor 4 na variável menuInicio para que possa dar continuidade la em baixo.
							break;//Esse comando break serve para mostrar para o sistema não executar mais nem um caso e sair do switch ir para proxíma instrução fora do switch.
					default://Esse caso é se o usuário dígitar uma opção diferente do menu acima ele vai entrar e executar oque está dentro desse caso.
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf(" Escolha uma das opções de 1 a 4 você dígitou: %d\n\n\n", menuDesconto);//essa linha de comando retorna uma informação de erro caso ele não tenha dígitado nem umas da opções validas.
							system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
				}
			}
			while(menuDesconto !=1 && menuDesconto !=2 && menuDesconto !=3 && menuDesconto !=4);//essa linha de comando faz a comparação com oque foi digitada no menuDesconto acima se nõa for valida ele retorna para escolher outra opção valida.						
			
			switch(menuInicio)//Essa linha de comando é as opções escolinha pelo usuário no menuInicio para impreção dos Tickets.
				{
						case 1://Esse caso é se o usuário dígitar a opção 1 do menu acima ele vai entrar e executar oque está dentro desse caso.
							system("cls");// limpa a tela quando chegar nesse ponto.
							imprimaPeriodo();//imprime na tela os pediodos do dia manhã, tarde e noite. 
							imprimaDataHora();//Função para mostrar o dia e a hora.						
							printf("\n  Valor: R$ 30,00\n\n");//imprime na tela o valor do ticket integral.
							total += 30;//soma o valor de mais 30 na variavel total para que possa ser feito o fechamneto do caixa.
							printf("  Poltrona: %d\n\n",poltrona);//imprime a quantidade de poltrona.						
							poltrona--;//tira o valor de menos 1 na variavel poltrona para que possa ser feito o fechamneto do caixa.
							integral ++;//soma o valor de mais 1 na variavel integral para que possa ser feito o fechamneto do caixa.					
						 	printf("----------------------------------------------------------\n\n\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
							system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
							break;//Esse comando break serve para mostrar para o sistema não executar mais nem um caso e sair do switch ir para proxíma instrução fora do switch.
						case 2://Esse caso é se o usuário dígitar a opção 2 do menu acima ele vai entrar e executar oque está dentro desse caso.
							system("cls");// limpa a tela quando chegar nesse ponto 
							imprimaPeriodo();//Função para imprimir na tela os pediodos do dia manhã, tarde e noite.
							imprimaDataHora();//Função para imprimir o dia e a hora.
							printf("\n  Valor: R$ 15,00\n\n");//imprime na tela o valor do ticket com 50% de desconto.
							total += 15;//soma o valor de mais 15 na variavel total para que possa ser feito o fechamneto do caixa.
							printf("  Poltrona: %d\n\n",poltrona);//imprime a quantidade de poltrona.							
							poltrona --;//tira o valor de menos 1 na variavel poltrona para que possa ser feito o fechamneto do caixa.
							meia ++;//soma o valor de mais 1 na variavel meia para que possa ser feito o fechamneto do caixa.						
						 	printf("----------------------------------------------------------\n\n\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
							system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
							break;//Esse comando break serve para mostrar para o sistema não executar mais nem um caso e sair do switch ir para proxíma instrução fora do switch.
						case 3://Esse caso é se o usuário dígitar a opção 3 do menu acima ele vai entrar e executar oque está dentro desse caso.
							system("cls");// limpa a tela quando chegar nesse ponto
							imprimaPeriodo();//imprime na tela os pediodos do dia manhã, tarde e noite. 
							imprimaDataHora();//Função para mostrar o dia e a hora.
							printf("\n  Ingresso gratuito bom esperaculo\n\n");//imprime na tela que o ticket é grátuito.
							printf("  Poltrona: %d\n\n",poltrona);//imprime a quantidade de poltrona.						
							poltrona --;//tira o valor de menos 1 na variavel poltrona para que possa ser feito o fechamneto do caixa.
							gratis ++;//soma o valor de mais 1 na variavel gratis para que possa ser feito o fechamneto do caixa.
							printf("----------------------------------------------------------\n\n\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
							system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
							break;//Esse comando break serve para mostrar para o sistema não executar mais nem um caso e sair do switch ir para proxíma instrução fora do switch.
						case 4://Esse caso é se o usuário dígitar a opção 4 do menu acima ele vai entrar e executar oque está dentro desse caso.	
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf(" Você apertou para sair deseja mesmo sair?\n\n\n");//imprime um alerta infomando que o usuário digitou a opção de sair.
							system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
							break;//Esse comando break serve para mostrar para o sistema não executar mais nem um caso e sair do switch ir para proxíma instrução fora do switch.
						default://Esse caso é se o usuário dígitar uma opção diferente do menu acima ele vai entrar e executar oque está dentro desse caso.
						printf(" Dígite umas das duas opções você dígitou %d\n\n\n",menuInicio  );//essalinha de comando pede para que o usuário digite uma opção valida e mostra qual o número ele está dígitando.
							system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
				}
			}		
			while(menuInicio !=1 && menuInicio !=2 && menuInicio !=3 && menuInicio !=4);//essa linha de comando faz a comparação com oque foi digitada no menuInicio acima se nõa for valida ele retorna para escolher outra opção valida.		
			do //esse "do" para caso o usuário dígitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
			{
				system("cls");// limpa a tela quando chegar nesse ponto 
				printf("\n      	    	Menu \n");//imprime informando para o usuário escolher uma das duas opções abaixo
				printf("----------------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
				printf("1-Fazer outra venda                      2-Fechar o caixa\n");//essa linha de comando da as duas opções possivei que o usuário terá fazer outra venda ou fechar o caixa.
				scanf("%d",&menuSaida);//Essa linha de comando pega o que o usuário dígitou e coloca dentro da variavel menuSaida.					
				if(menuSaida !=1 && menuSaida !=2)//essa linha de comando faz a comparação com oque foi digitada na variavel opcaoSaida acima se for diferente ele executa oque está dentro se não ele pula.
				{
					printf("Dígite umas das duas opções você dígitou %d\n", menuSaida);//Imprime um erro e e pede para dígitar uma opção valida e informa qual tecla a pessoa dígitou.
					system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
				}			
			}
				while(menuSaida !=1 && menuSaida !=2);//essa linha de comando faz a comparação com oque foi digitada no menuSaida acima se nõa for valida ele retorna para escolher outra opção valida.
	}
		while(menuSaida !=2);//essa linha de comando faz a comparação com oque foi digitada no menuSaida acima se o usuário dígitar 1 ele volta para continuar fazendo as vendas;	
				system("cls");// limpa a tela quando chegar nesse ponto 
				printf(" Fechamento de caixa\n");//imprime o fechamento de caixa.
				printf("----------------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado. 
				imprimaDataHora();//Função para mostrar o dia e a hora.
				printf("\nIngressos com preço integrais vendidos: %d\n",integral);//imprime quandos ingressos foram vendidoscsem desconto.
				printf("Ingressos com 50%% de desconto vendidos: %d\n",meia);//imprime quandos ingressos foram vendidos com 505 de desconto.
				printf("Ingressos com 100%% de desconto vendidos: %d\n",gratis);//imprime quandos ingressos foram vendidos gratis.
				printf("\n\nTotal de poltronas livres: %d\n\n", poltrona);//imprime o total de poltronas livres até o fechamento dos caixa.
				printf("total de ingressos vendidos %d\n\n",totalIngressos=integral+meia+gratis);//imprime o total de ingressos vendidos
				printf("O valor total: R$ %d,00\n\n",total);//imprime o valor total de ingressos vendidos.
			
}

void imprimaDataHora(void)//função de criação de data e hora.
{	
	struct tm funcao_data= {0};//nome da struct.
    time_t tempo_data;//essa linha de comando representar o tempo local .

    time(&tempo_data);//obtendo o tempo local para utilizar a baixo como  dia mes ano e hora min sec.
    funcao_data = *localtime(&tempo_data);//convertendo de segundos para o tempo local 
	
    printf("           Ticket                  Sessão: %d\n",diaSecao);//imprime na tela Ticket e a sessão mais o número da sessão.
    printf("----------------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado.
    printf("                   Minha namorada é uma peça\n\n ");
    //a linha de comando abaixo determina o dia/mes/ano apartir de 1900.
    printf(" Dia: %d/%d/%d ",funcao_data.tm_mday,funcao_data.tm_mon+1,funcao_data.tm_year+1900);//imprime na tela o dia/mes/ano apartir de 1900.
   	//a linha de comando abaxo determina a hora:minutos:segundos.
    printf("			Hora: %d:%d:%d \n",funcao_data.tm_hour,funcao_data.tm_min,funcao_data.tm_sec);//imprime na tela a hora:minutos:segundos.
    
}

void impremaPoltrna(void)//Função de criação das poltronas.
{
	void imprimaPeriodo(void);//Função para imprimir o dia e a hora.
	 	if(poltrona <= 0) //essa linha de comando faz a comparação quando chegar a 0 o número de poltronas e da uma opção logo em seguida. 
		{
			do //esse "do" para caso o usuário dígitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
			{
				system("cls");// limpa a tela quando chegar nesse ponto 
				printf("                    Poltrona indisponivel\n\n");//imprime na tela que está sem poltronas disponiveis e da as opções.
				printf("-------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado. 
				printf(" 1-para escolher outra sessão                 2-para sair\n\n");//imprime as opções disponiveis para o usuário se ele que escolher outra sessão ou cancelar a compra.				
				scanf("%d",&numero1);//Essa linha de comando pega o que o usuário dígitou e coloca dentro da variavel numero1.
				if(numero1!=1 && numero1!=2)//essa linha de comando faz a comparação com oque foi digitada e capitado pela variavel opcaoSaida acima.
				{
					printf("Dígite umas das duas opções você dígitou %d\n\n\n", numero1);//Imprime um erro e e pede para dígitar uma opção valida e informa qual tecla a pessoa dígitou.
					system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
				}
			}
			while(numero1!=1 && numero1!=2);//essa linha de comando faz a comparação com oque foi digitada no numero1 acima se nõa for valida ele retorna para escolher outra opção valida.
			if(numero1 !=2)//se o numero dígitado for diferente de 2, ou seja, o 1 ele executa oque está dentro se não ele pula.
			{
				poltrona +=30;//acresenta mais 30 poltronas.
				diaSecao ++;//acresenta mais 1 na sessão mudando o statos da sessão	ex: sessão 1, sessão 2, etc... 
			}			
		}
		else if(poltrona <=3)//faz a comparação quando a quantidade de poltronas chegar a 3. 
		{
			system("cls");// limpa a tela quando chegar nesse ponto 
			printf("				Sessão %d\n\n",diaSecao);//imprime o número da sessão.
			printf("-------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado. 
			printf("Ultimas poltronas só no dia seguinte!!!!\n");//imprime na tela que são as ultimas poltronas.
			printf("Temos %d poltronas disponiveis\n\n\n", poltrona);//imprime a quantidade de poltronas ainda restantes.			
			system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar						
		}
		else if(poltrona <=10)//faz a comparação quando a quantidade de poltronas chegar a 10. 
		{	
			system("cls");// limpa a tela quando chegar nesse ponto
			imprimaPeriodo();//Função para imprimir o periodo manhã, tarde ou noite
			printf("				Sessão %d\n\n",diaSecao);//imprime o número da sessão.
			printf("-------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado. 	
			printf("Temos %d poltronas disponiveis 10 por período\n\n\n", poltrona);//imprime a quantidade de poltronas ainda restantes e infoma que são 10 por periodo manhã, tarde e noite.
			secao +=3;			
			system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar				
		}
		else if(poltrona <=20)//faz a comparação quando a quantidade de poltronas chegar a 20. 
		{	
			system("cls");// limpa a tela quando chegar nesse ponto 
			imprimaPeriodo();//Função para imprimir o periodo manhã, tarde ou noite
			printf("				Sessão %d\n\n",diaSecao);//imprime o número da sessão.
			printf("-------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado. 
			printf("Temos %d poltronas disponiveis 10 por período\n\n\n", poltrona);//imprime a quantidade de poltronas ainda restantes e infoma que são 10 por periodo manhã, tarde e noite.
			secao +=2;
			
			system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar					
		}		
		else //essa linha de comando mantem informado quem está vendendo os ingressos a quantidade de poltronas disponiveis 
		{	
			system("cls");// limpa a tela quando chegar nesse ponto 
			imprimaPeriodo();//Função para imprimir o periodo manhã, tarde ou noite
			printf("				Sessão %d\n\n",diaSecao);//imprime o número da sessão.
			printf("-------------------------------------------------\n");//imprime uma divisão, coloquei essa divisão para ficar mais organizado. 			
			printf("Temos %d poltronas disponiveis 10 por período\n\n\n", poltrona);//imprime a quantidade de poltronas ainda restantes e infoma que são 10 por periodo manhã, tarde e noite.
			secao +=1;//soma mais 1 para almentar a sessões conforme vai vendendo od ingressos.		   	
			system("pause");//quando chega nessa linha de comando o sistema para só continua quando o usuário clica em qualquer tecla para continuar
		//	system("cls");
		}
		
}

void imprimaPeriodo(void)//Função para imprimir o periodo manhã, tarde ou noite
{
	if(poltrona <=10)//essa linha de comando mostra a ultima sessão com 10 ingressos na parte da noite
	{
		printf("Periodo: Noite");//imprimir o periodo noite.
	}
	else if(poltrona <=20)//essa linha de comando mostra a sessão com 10 ingressos na parte da tarde.
	{
		printf("Periodo: tarde");//imprimir o periodo tarde.
	}
	else//essa linha de comando mostra a sessão com 10 ingressos na parte da manhã.
	{
		printf("Periodo: Manhã");//Função para imprimir o periodo manhã.
	}
}


