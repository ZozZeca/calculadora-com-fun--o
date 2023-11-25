// calculadora simples usando fun��es e switch case

#include <stdio.h> //biblioteca usada para este programa

// prototipos 
void soma (float n1, float n2);
void subtracao (float n1, float n2);
void multiplicacao (float n1, float n2);
void divisao (float n1, float n2);

int main()
{
	int operador; float n1; float n2;
	
	printf("digite o primeiro numero:\n");		// pede o primeiro numero da opera��o
	scanf("%f", & n1);		// guarda o valor
	
	printf("digite a operacao\n'1'soma\n'2'subtracao\n'3'multiplicacao\n'4'divisao\n"); 		// menu que pede qual a opera��o sera realizada
	scanf("%i", & operador);
	
	printf("digite o segundo numero:\n");		// pede o segundo numero da opera��o
	scanf("%f", & n2);		// guarda o valor
	
	switch (operador)		// switch case para a sele��o das opera��es
	{
		case 1:
			soma(n1, n2); 	// chama a fun��o soma
			break;
		case 2:
			subtracao(n1, n2);	// chama a fun��o subtra��o
			break;
		case 3:
			multiplicacao(n1, n2);	// chama a fun��o multiplica��o
			break;
	
		case 4:
			if(n2 != 0)
			{
				divisao(n1, n2);	// chama a fun��o divis�o
			}
			else
			{
				printf("divisao por 0"); 	// caso a divis�o ser feita por 0, sera exibido uma mensagem de erro
			}
			break;
	
		default:
			printf("operador invalido");	// mensagem de erro caso seja n�o feito nunhuma das escolhas possiveis no menu
			break;
	}
	return 0;
}

void soma (float n1, float n2)
{
	printf("%.2f\n", n1 + n2); // soma
}
void subtracao (float n1, float n2)
{
	printf("%.2f\n", n1 - n2);	// subtra��o
}
void multiplicacao (float n1, float n2)
{
	printf("%.2f\n", n1 * n2); // multiplica��o
}
void divisao (float n1, float n2)
{
	printf("%.2f\n", n1 / n2); // divis�o
}
