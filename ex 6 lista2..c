//6 - Escreva um procedimento que lei 3 números e ao final subtraia o primeiro
// do segundo e dívida o resultado pelo terceiro. Fazer a chamada no programa principal.
#include <stdio.h>
#include <conio.h>
void Leitura_multiplicacao()
{
	float num1, num2, num3, subtracao, resultadofinal;
	
	printf("informe um numero");
	scanf("%f", &num1);
	printf("informe outro numero");
	scanf("%f", &num2);
	printf("informe um numero");
	scanf("%f", &num3);

	
	subtracao = num1 - num2;
	resultadofinal = subtracao / num3;

	printf("Resultadofinal: %f", resultadofinal);	
}

void main()
{
	Leitura_multiplicacao();	
}
