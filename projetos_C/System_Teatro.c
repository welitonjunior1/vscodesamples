#include <stdio.h>//cabe�alho da biblioteca padr�o da linguagem C
#include <locale.h>//biblioteca de idiomas para acertar a assentua��o
#include <stdlib.h>//fun��es b�sicas do sistema
#include <time.h>//biblioteca de tempo serve para trabalhar com a data e hora atual do sistema

// Declara��o de vairiaveis globais
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
 	void imprimaDataHora(void);//Primeira fun��o me tr�s dia e hora 
 	void impremaPoltrna(void);//Segunda fun��o me tr�s o n�mero da poltrona e o periodo se � manh�, tarde ou noite.
 	void imprimaPeriodo(void);//terceira fun��o me tr�s o periodo se � manh�, tarde ou noite.
	
		setlocale(LC_ALL,"Portuguese");	//A linha abaixo configura o idioma para portugu�s
		
		system("color f0");// nessa linha de programa eu estou acresentando a cor de fundo e a cor da fonte.
			
	do //Esse "do" sever para que o usu�rio possa fazer outra venda e retorna aqui pro inicio.
	{
		do //Esse "do" sever para evitar que o usu�rio n�o d�gite outros valores menuInicio e retorna aqui pro inicio. 
		{
			do //Esse "do" sever para evitar que o usu�rio n�o d�gite outros valores no menuDesconto e retorna aqui pro inicio. 
			{ 	
				impremaPoltrna();//essa fun��o mostra o status das poltronas. 
				system("cls");// limpa a tela quando chegar nesse ponto 
				printf("\n Sistemas de vendas de ingresso para o teatro\n");//Imprime na tela oque est� dentro das aspas na tela. 
				printf("-------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
				printf("Escolha uma das op��es\n");//Imprime na tela um menu para o usu�rio escolher uma op��o.
				printf("1-Sem descontos\n");//imprime a 1 op��o do menu.
				printf("2-50%%\n");//imprime a 2 op��o do menu.
				printf("3-100%%\n");//imprime a 3 op��o do menu. 
				printf("4-sair\n");//imprime a 4 op��o do menu.
				scanf("%d", &menuDesconto);//Essa linha de comando pega o que o usu�rio d�gitou e coloca dentro da variavel menuDesconto.
								
				switch(menuDesconto)//Essa linha de comando abre o menu de op��es com oque o usu�rio d�gitou logo acima.
				{
					case 1://Esse caso � se o usu�rio d�gitar a op��o 1 do menu acima ele vai entrar e executar oque est� dentro desse caso.
						do //esse "do" para caso o usu�rio d�gitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
						{					
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf("\n Voc� escolheu a op��o sem desconto!!! \n");//confirma a op��o escolhida pelo usu�rio.
							printf("----------------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado. 
							printf("               Escolha uma das op��es\n\n");//imprime informando para o usu�rio escolher uma das duas op��es abaixo
							printf(" 1-Efetuar a venda		2-Voltar ao menu de vendas\n");//essa linha de comando da as duas op��es possivei que o usu�rio ter�.				
							scanf("%d",&opcaoSaida);//Essa linha de comando pega o que o usu�rio d�gitou e coloca dentro da variavel opcaoSaida.		
							if (opcaoSaida != 1 && opcaoSaida != 2)//essa linha de comando faz a compara��o com oque digitada acima.
							{
								system("cls");// limpa a tela quando chegar nesse ponto 
								printf("D�gite umas das duas op��es voc� d�gitou %d\n\n\n", opcaoSaida);//Imprime um erro e e pede para d�gitar uma op��o valida e informa qual tecla a pessoa d�gitou.
								system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
							}							
						}
						while(opcaoSaida != 1 && opcaoSaida !=2 );//essa linha de comando faz a compara��o com oque digitada acima se n�a for valida ele retorna para escolher outra op��o valida.
					
						if(opcaoSaida !=2)//essa linha de comando me tr�s o resultado 1 que o usu�rio d�gitou acima
						{
							
							menuInicio=1;//acresenta o valor 1 na vari�vel menuInicio para que possa dar continuidade la em baixo.
						}
						else//essa linha de comando serve para se caso oque for d�gitado a op��o 2 ele executa oque est� dentro do else.
						{
							menuInicio=4;//acresenta o valor 4 na vari�vel menuInicio para que possa dar continuidade la em baixo.
						}			
						break;//Esse comando break serve para mostrar para o sistema n�o executar mais nem um caso e sair do switch ir para prox�ma instru��o fora do switch.
					case 2://Esse caso � se o usu�rio d�gitar a op��o 2 do menu acima ele vai entrar e executar oque est� dentro desse caso.
						do //esse "do" para caso o usu�rio d�gitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
						{
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf("\n Voc� escolheu a op��o 50%% de desconto!!!\n");//confirma a op��o escolhida pelo usu�rio.
							printf("----------------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
							printf("                    Escolha uma das op��es\n\n");//imprime informando para o usu�rio escolher uma das duas op��es abaixo
							printf("  1-Para uma das 3 op��es abaixo	2-Voltar ao menu de vendas\n");//essa linha de comando da as duas op��es possivei que o usu�rio ter�.
							printf("  Estudatente\n");//imprime na tela uma das 3 op��es validas para efetuar a venda com 50% de desconto.
							printf("  Crian�a de 2 � 12 anos\n");//imprime na tela uma das 3 op��es validas para efetuar a venda com 50% de desconto.
							printf("  Professor da rede p�blica de ensino\n");//imprime na tela uma das 3 op��es validas para efetuar a venda com 50% de desconto.
							scanf("%d",&opcaoSaida);//Essa linha de comando pega o que o usu�rio d�gitou e coloca dentro da variavel opcaoSaida.
							if (opcaoSaida != 1 && opcaoSaida != 2)//essa linha de comando faz a compara��o com a com oque digitada acima se for diferente entra e executa o comando abaixo.
							{
								system("cls");// limpa a tela quando chegar nesse ponto 
								printf(" D�gite umas das duas op��es voc� d�gitou %d\n\n\n", opcaoSaida);//Imprime um erro e e pede para d�gitar uma op��o valida e informa qual tecla a pessoa d�gitou.
								system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
							}
						}
						while(opcaoSaida != 1 && opcaoSaida != 2);//essa linha de comando faz a compara��o com oque digitada e capitado pela variavel opcaoSaida acima se n�a for valida ele retorna para escolher outra op��o valida.
						
						if(opcaoSaida !=2)//essa linha de comando me tr�s o resultado 1 que o usu�rio d�gitou acima
						{		
							menuInicio=2;//acresenta o valor 2 na vari�vel menuInicio para que possa dar continuidade la em baixo.
						}
						else//essa linha de comando serve para se caso oque for d�gitado a op��o 2 ele executa oque est� dentro do else.
						{
							menuInicio=4;//acresenta o valor 4 na vari�vel menuInicio para que possa dar continuidade la em baixo.
						}
						break;//Esse comando break serve para mostrar para o sistema n�o executar mais nem um caso e sair do switch ir para prox�ma instru��o fora do switch.
					case 3://Esse caso � se o usu�rio d�gitar a op��o 3 do menu acima ele vai entrar e executar oque est� dentro desse caso.						
							do //esse "do" para caso o usu�rio d�gitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
							{				
								system("cls");// limpa a tela quando chegar nesse ponto 
								printf("\n Voc� escolheu a op��o 100%% de desconto!!!\n");//confirma a op��o escolhida pelo usu�rio.
								printf("----------------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
								printf("              Escolha uma das op��es\n\n");//imprime informando para o usu�rio escolher uma das duas op��es abaixo					
								printf(" 1-Para uma as 2 op��es abaixo	   2-Para voltar ao menu de vendas\n");//essa linha de comando da as duas op��es possivei que o usu�rio ter�.
								printf(" ter�a-Feira\n");//imprime na tela uma das 2 op��es validas para efetuar a venda com 100% de desconto.
								printf(" crian�a de baixa renda e da rede p�blica de ensino?\n");//imprime na tela uma das 2 op��es validas para efetuar a venda com 100% de desconto.								
								scanf("%d",&opcaoSaida);//Essa linha de comando pega o que o usu�rio d�gitou e coloca dentro da variavel opcaoSaida.		
								if (opcaoSaida != 1 && opcaoSaida != 2)//essa linha de comando faz a compara��o com oque foi digitada na variavel opcaoSaida acima se for diferente ele executa oque est� dentro se n�o ele pula.
								{
									system("cls");// limpa a tela quando chegar nesse ponto 
									printf(" D�gite umas das duas op��es voc� d�gitou %d\n\n\n", opcaoSaida);//Imprime um erro e e pede para d�gitar uma op��o valida e informa qual tecla a pessoa d�gitou.
									system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
								}					
							}
							while(opcaoSaida != 1 && opcaoSaida != 2);//essa linha de comando faz a compara��o com oque digitada e capitado pela variavel opcaoSaida acima se n�a for valida ele retorna para escolher outra op��o valida.						
							if(opcaoSaida !=2)//essa linha de comando me tr�s o resultado 1 que o usu�rio d�gitou acima
							{
								
								menuInicio=3;//acresenta o valor 3 na vari�vel menuInicio para que possa dar continuidade la em baixo.
							}
							else//essa linha de comando serve para se caso oque for d�gitado a op��o 2 ele executa oque est� dentro do else.
							{
								menuInicio=4;//acresenta o valor 4 na vari�vel menuInicio para que possa dar continuidade la em baixo.
							}
							break;//Esse comando break serve para mostrar para o sistema n�o executar mais nem um caso e sair do switch ir para prox�ma instru��o fora do switch.
					case 4://Esse caso � se o usu�rio d�gitar a op��o 4 do menu acima ele vai entrar e executar oque est� dentro desse caso.	
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf(" Voc� escolheu a op��o sair deseja mesmo sair?\n");////imprime um alerta infomando que o usu�rio digitou a op��o de sair.
							printf("----------------------------------------------------------\n\n\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
							system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
								menuInicio=4;//acresenta o valor 4 na vari�vel menuInicio para que possa dar continuidade la em baixo.
							break;//Esse comando break serve para mostrar para o sistema n�o executar mais nem um caso e sair do switch ir para prox�ma instru��o fora do switch.
					default://Esse caso � se o usu�rio d�gitar uma op��o diferente do menu acima ele vai entrar e executar oque est� dentro desse caso.
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf(" Escolha uma das op��es de 1 a 4 voc� d�gitou: %d\n\n\n", menuDesconto);//essa linha de comando retorna uma informa��o de erro caso ele n�o tenha d�gitado nem umas da op��es validas.
							system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
				}
			}
			while(menuDesconto !=1 && menuDesconto !=2 && menuDesconto !=3 && menuDesconto !=4);//essa linha de comando faz a compara��o com oque foi digitada no menuDesconto acima se n�a for valida ele retorna para escolher outra op��o valida.						
			
			switch(menuInicio)//Essa linha de comando � as op��es escolinha pelo usu�rio no menuInicio para impre��o dos Tickets.
				{
						case 1://Esse caso � se o usu�rio d�gitar a op��o 1 do menu acima ele vai entrar e executar oque est� dentro desse caso.
							system("cls");// limpa a tela quando chegar nesse ponto.
							imprimaPeriodo();//imprime na tela os pediodos do dia manh�, tarde e noite. 
							imprimaDataHora();//Fun��o para mostrar o dia e a hora.						
							printf("\n  Valor: R$ 30,00\n\n");//imprime na tela o valor do ticket integral.
							total += 30;//soma o valor de mais 30 na variavel total para que possa ser feito o fechamneto do caixa.
							printf("  Poltrona: %d\n\n",poltrona);//imprime a quantidade de poltrona.						
							poltrona--;//tira o valor de menos 1 na variavel poltrona para que possa ser feito o fechamneto do caixa.
							integral ++;//soma o valor de mais 1 na variavel integral para que possa ser feito o fechamneto do caixa.					
						 	printf("----------------------------------------------------------\n\n\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
							system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
							break;//Esse comando break serve para mostrar para o sistema n�o executar mais nem um caso e sair do switch ir para prox�ma instru��o fora do switch.
						case 2://Esse caso � se o usu�rio d�gitar a op��o 2 do menu acima ele vai entrar e executar oque est� dentro desse caso.
							system("cls");// limpa a tela quando chegar nesse ponto 
							imprimaPeriodo();//Fun��o para imprimir na tela os pediodos do dia manh�, tarde e noite.
							imprimaDataHora();//Fun��o para imprimir o dia e a hora.
							printf("\n  Valor: R$ 15,00\n\n");//imprime na tela o valor do ticket com 50% de desconto.
							total += 15;//soma o valor de mais 15 na variavel total para que possa ser feito o fechamneto do caixa.
							printf("  Poltrona: %d\n\n",poltrona);//imprime a quantidade de poltrona.							
							poltrona --;//tira o valor de menos 1 na variavel poltrona para que possa ser feito o fechamneto do caixa.
							meia ++;//soma o valor de mais 1 na variavel meia para que possa ser feito o fechamneto do caixa.						
						 	printf("----------------------------------------------------------\n\n\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
							system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
							break;//Esse comando break serve para mostrar para o sistema n�o executar mais nem um caso e sair do switch ir para prox�ma instru��o fora do switch.
						case 3://Esse caso � se o usu�rio d�gitar a op��o 3 do menu acima ele vai entrar e executar oque est� dentro desse caso.
							system("cls");// limpa a tela quando chegar nesse ponto
							imprimaPeriodo();//imprime na tela os pediodos do dia manh�, tarde e noite. 
							imprimaDataHora();//Fun��o para mostrar o dia e a hora.
							printf("\n  Ingresso gratuito bom esperaculo\n\n");//imprime na tela que o ticket � gr�tuito.
							printf("  Poltrona: %d\n\n",poltrona);//imprime a quantidade de poltrona.						
							poltrona --;//tira o valor de menos 1 na variavel poltrona para que possa ser feito o fechamneto do caixa.
							gratis ++;//soma o valor de mais 1 na variavel gratis para que possa ser feito o fechamneto do caixa.
							printf("----------------------------------------------------------\n\n\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
							system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
							break;//Esse comando break serve para mostrar para o sistema n�o executar mais nem um caso e sair do switch ir para prox�ma instru��o fora do switch.
						case 4://Esse caso � se o usu�rio d�gitar a op��o 4 do menu acima ele vai entrar e executar oque est� dentro desse caso.	
							system("cls");// limpa a tela quando chegar nesse ponto 
							printf(" Voc� apertou para sair deseja mesmo sair?\n\n\n");//imprime um alerta infomando que o usu�rio digitou a op��o de sair.
							system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
							break;//Esse comando break serve para mostrar para o sistema n�o executar mais nem um caso e sair do switch ir para prox�ma instru��o fora do switch.
						default://Esse caso � se o usu�rio d�gitar uma op��o diferente do menu acima ele vai entrar e executar oque est� dentro desse caso.
						printf(" D�gite umas das duas op��es voc� d�gitou %d\n\n\n",menuInicio  );//essalinha de comando pede para que o usu�rio digite uma op��o valida e mostra qual o n�mero ele est� d�gitando.
							system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
				}
			}		
			while(menuInicio !=1 && menuInicio !=2 && menuInicio !=3 && menuInicio !=4);//essa linha de comando faz a compara��o com oque foi digitada no menuInicio acima se n�a for valida ele retorna para escolher outra op��o valida.		
			do //esse "do" para caso o usu�rio d�gitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
			{
				system("cls");// limpa a tela quando chegar nesse ponto 
				printf("\n      	    	Menu \n");//imprime informando para o usu�rio escolher uma das duas op��es abaixo
				printf("----------------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
				printf("1-Fazer outra venda                      2-Fechar o caixa\n");//essa linha de comando da as duas op��es possivei que o usu�rio ter� fazer outra venda ou fechar o caixa.
				scanf("%d",&menuSaida);//Essa linha de comando pega o que o usu�rio d�gitou e coloca dentro da variavel menuSaida.					
				if(menuSaida !=1 && menuSaida !=2)//essa linha de comando faz a compara��o com oque foi digitada na variavel opcaoSaida acima se for diferente ele executa oque est� dentro se n�o ele pula.
				{
					printf("D�gite umas das duas op��es voc� d�gitou %d\n", menuSaida);//Imprime um erro e e pede para d�gitar uma op��o valida e informa qual tecla a pessoa d�gitou.
					system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
				}			
			}
				while(menuSaida !=1 && menuSaida !=2);//essa linha de comando faz a compara��o com oque foi digitada no menuSaida acima se n�a for valida ele retorna para escolher outra op��o valida.
	}
		while(menuSaida !=2);//essa linha de comando faz a compara��o com oque foi digitada no menuSaida acima se o usu�rio d�gitar 1 ele volta para continuar fazendo as vendas;	
				system("cls");// limpa a tela quando chegar nesse ponto 
				printf(" Fechamento de caixa\n");//imprime o fechamento de caixa.
				printf("----------------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado. 
				imprimaDataHora();//Fun��o para mostrar o dia e a hora.
				printf("\nIngressos com pre�o integrais vendidos: %d\n",integral);//imprime quandos ingressos foram vendidoscsem desconto.
				printf("Ingressos com 50%% de desconto vendidos: %d\n",meia);//imprime quandos ingressos foram vendidos com 505 de desconto.
				printf("Ingressos com 100%% de desconto vendidos: %d\n",gratis);//imprime quandos ingressos foram vendidos gratis.
				printf("\n\nTotal de poltronas livres: %d\n\n", poltrona);//imprime o total de poltronas livres at� o fechamento dos caixa.
				printf("total de ingressos vendidos %d\n\n",totalIngressos=integral+meia+gratis);//imprime o total de ingressos vendidos
				printf("O valor total: R$ %d,00\n\n",total);//imprime o valor total de ingressos vendidos.
			
}

void imprimaDataHora(void)//fun��o de cria��o de data e hora.
{	
	struct tm funcao_data= {0};//nome da struct.
    time_t tempo_data;//essa linha de comando representar o tempo local .

    time(&tempo_data);//obtendo o tempo local para utilizar a baixo como  dia mes ano e hora min sec.
    funcao_data = *localtime(&tempo_data);//convertendo de segundos para o tempo local 
	
    printf("           Ticket                  Sess�o: %d\n",diaSecao);//imprime na tela Ticket e a sess�o mais o n�mero da sess�o.
    printf("----------------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado.
    printf("                   Minha namorada � uma pe�a\n\n ");
    //a linha de comando abaixo determina o dia/mes/ano apartir de 1900.
    printf(" Dia: %d/%d/%d ",funcao_data.tm_mday,funcao_data.tm_mon+1,funcao_data.tm_year+1900);//imprime na tela o dia/mes/ano apartir de 1900.
   	//a linha de comando abaxo determina a hora:minutos:segundos.
    printf("			Hora: %d:%d:%d \n",funcao_data.tm_hour,funcao_data.tm_min,funcao_data.tm_sec);//imprime na tela a hora:minutos:segundos.
    
}

void impremaPoltrna(void)//Fun��o de cria��o das poltronas.
{
	void imprimaPeriodo(void);//Fun��o para imprimir o dia e a hora.
	 	if(poltrona <= 0) //essa linha de comando faz a compara��o quando chegar a 0 o n�mero de poltronas e da uma op��o logo em seguida. 
		{
			do //esse "do" para caso o usu�rio d�gitar alguma coisa diferente doque foi solicitado ele volta aqui pra cima e executa de novo.
			{
				system("cls");// limpa a tela quando chegar nesse ponto 
				printf("                    Poltrona indisponivel\n\n");//imprime na tela que est� sem poltronas disponiveis e da as op��es.
				printf("-------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado. 
				printf(" 1-para escolher outra sess�o                 2-para sair\n\n");//imprime as op��es disponiveis para o usu�rio se ele que escolher outra sess�o ou cancelar a compra.				
				scanf("%d",&numero1);//Essa linha de comando pega o que o usu�rio d�gitou e coloca dentro da variavel numero1.
				if(numero1!=1 && numero1!=2)//essa linha de comando faz a compara��o com oque foi digitada e capitado pela variavel opcaoSaida acima.
				{
					printf("D�gite umas das duas op��es voc� d�gitou %d\n\n\n", numero1);//Imprime um erro e e pede para d�gitar uma op��o valida e informa qual tecla a pessoa d�gitou.
					system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
				}
			}
			while(numero1!=1 && numero1!=2);//essa linha de comando faz a compara��o com oque foi digitada no numero1 acima se n�a for valida ele retorna para escolher outra op��o valida.
			if(numero1 !=2)//se o numero d�gitado for diferente de 2, ou seja, o 1 ele executa oque est� dentro se n�o ele pula.
			{
				poltrona +=30;//acresenta mais 30 poltronas.
				diaSecao ++;//acresenta mais 1 na sess�o mudando o statos da sess�o	ex: sess�o 1, sess�o 2, etc... 
			}			
		}
		else if(poltrona <=3)//faz a compara��o quando a quantidade de poltronas chegar a 3. 
		{
			system("cls");// limpa a tela quando chegar nesse ponto 
			printf("				Sess�o %d\n\n",diaSecao);//imprime o n�mero da sess�o.
			printf("-------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado. 
			printf("Ultimas poltronas s� no dia seguinte!!!!\n");//imprime na tela que s�o as ultimas poltronas.
			printf("Temos %d poltronas disponiveis\n\n\n", poltrona);//imprime a quantidade de poltronas ainda restantes.			
			system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar						
		}
		else if(poltrona <=10)//faz a compara��o quando a quantidade de poltronas chegar a 10. 
		{	
			system("cls");// limpa a tela quando chegar nesse ponto
			imprimaPeriodo();//Fun��o para imprimir o periodo manh�, tarde ou noite
			printf("				Sess�o %d\n\n",diaSecao);//imprime o n�mero da sess�o.
			printf("-------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado. 	
			printf("Temos %d poltronas disponiveis 10 por per�odo\n\n\n", poltrona);//imprime a quantidade de poltronas ainda restantes e infoma que s�o 10 por periodo manh�, tarde e noite.
			secao +=3;			
			system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar				
		}
		else if(poltrona <=20)//faz a compara��o quando a quantidade de poltronas chegar a 20. 
		{	
			system("cls");// limpa a tela quando chegar nesse ponto 
			imprimaPeriodo();//Fun��o para imprimir o periodo manh�, tarde ou noite
			printf("				Sess�o %d\n\n",diaSecao);//imprime o n�mero da sess�o.
			printf("-------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado. 
			printf("Temos %d poltronas disponiveis 10 por per�odo\n\n\n", poltrona);//imprime a quantidade de poltronas ainda restantes e infoma que s�o 10 por periodo manh�, tarde e noite.
			secao +=2;
			
			system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar					
		}		
		else //essa linha de comando mantem informado quem est� vendendo os ingressos a quantidade de poltronas disponiveis 
		{	
			system("cls");// limpa a tela quando chegar nesse ponto 
			imprimaPeriodo();//Fun��o para imprimir o periodo manh�, tarde ou noite
			printf("				Sess�o %d\n\n",diaSecao);//imprime o n�mero da sess�o.
			printf("-------------------------------------------------\n");//imprime uma divis�o, coloquei essa divis�o para ficar mais organizado. 			
			printf("Temos %d poltronas disponiveis 10 por per�odo\n\n\n", poltrona);//imprime a quantidade de poltronas ainda restantes e infoma que s�o 10 por periodo manh�, tarde e noite.
			secao +=1;//soma mais 1 para almentar a sess�es conforme vai vendendo od ingressos.		   	
			system("pause");//quando chega nessa linha de comando o sistema para s� continua quando o usu�rio clica em qualquer tecla para continuar
		//	system("cls");
		}
		
}

void imprimaPeriodo(void)//Fun��o para imprimir o periodo manh�, tarde ou noite
{
	if(poltrona <=10)//essa linha de comando mostra a ultima sess�o com 10 ingressos na parte da noite
	{
		printf("Periodo: Noite");//imprimir o periodo noite.
	}
	else if(poltrona <=20)//essa linha de comando mostra a sess�o com 10 ingressos na parte da tarde.
	{
		printf("Periodo: tarde");//imprimir o periodo tarde.
	}
	else//essa linha de comando mostra a sess�o com 10 ingressos na parte da manh�.
	{
		printf("Periodo: Manh�");//Fun��o para imprimir o periodo manh�.
	}
}


