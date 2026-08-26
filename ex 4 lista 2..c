//4 - Escreva um procedimento que leia 2 números, após a leitura somar e exibir o resultado. Este procedimento deverá ser chamado através do programa principal.
#include <stdio.h>
#include <conio.h>

void Leitura_soma()
{
	int num1, num2, soma;
	
	printf("informe um numero");
	scanf("%d", &num1);
	printf("informe outro numero");
	scanf("%d", &num2);
	
	soma = num1 + num2;

	printf("Resultado soma: %d",soma);	
}

void main()
{
	Leitura_soma();	
}
