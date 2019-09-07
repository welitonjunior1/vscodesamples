#include <stdio.h>
#include <time.h>//biblioteca de tempo
#include <locale.h>//biblioteca de idiomas para acertar o assentuação

int main(void) {
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");
    struct tm funcao_data= {0};
    time_t tempo_data;

    time(&tempo_data);
    funcao_data = *localtime(&tempo_data);

    puts("Informações");
    printf("DIA: %d/%d/%d \n",funcao_data.tm_mday,funcao_data.tm_mon+1,funcao_data.tm_year+1900);
   

    printf("HORA: %d:%d:%d \n",funcao_data.tm_hour,funcao_data.tm_min,funcao_data.tm_sec);
    
    return 0;
    }
