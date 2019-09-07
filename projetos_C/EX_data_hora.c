#include <time.h>
#include <stdio.h>


main(){
	char dateStr[9];
	char timeStr[9];
	
	//pega a data atual
	_strdate( dateStr);
	
	printf_s("A data correta e %s \n", dateStr);
	
	//pega a hora atual
	_strtime( timeStr);
	
	printf_s("O horario correto e %s \n", timeStr);
	
	getchar();
	return 0;
}
