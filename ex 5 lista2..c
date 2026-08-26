//5 - Escreva um procedimento que leia 4 números, após a leitura multiplique todos e 
//exibir o resultado. Este procedimento deverá ser chamado através do programa principal.
#include <stdio.h>
#include <conio.h>
void Leitura_multiplicacao()
{
	float num1, num2, num3, num4, multiplicacao;
	
	printf("informe um numero");
	scanf("%f", &num1);
	printf("informe outro numero");
	scanf("%f", &num2);
	printf("informe um numero");
	scanf("%f", &num3);
	printf("informe outro numero");
	scanf("%f", &num4);
	
	multiplicacao = num1 * num2 * num3 * num4;

	printf("Resultado multiplicação: %f", multiplicacao);	
}

void main()
{
	Leitura_multiplicacao();	
}
