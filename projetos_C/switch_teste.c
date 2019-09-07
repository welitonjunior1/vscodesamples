#include <stdio.h>
void main ()
{
 	float num1, num2;
 	char op;
 	printf("Digite: numero op numero\n");
 	scanf ("%f %c %f", &num1, &op,
	&num2);
 	switch (op)
	{
 		case '+':
 			printf(" = %f\n", num1+num2);
 				break;
 		case '-':
 			printf(" = %f\n", num1-num2);
 			break;
 		case '*':
 			printf(" = %f\n", num1*num2);
 			break;
 		case '/':
 				if (num2 != 0)
 					printf("%10.2f\n",num1/num2);
 				else
 					printf("divisao por zero\n");
 			break;
 		default:
 			printf("Operador invalido!\n");
 			break;
 	}
}
