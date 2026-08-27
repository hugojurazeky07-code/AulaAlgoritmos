//1 - Escreva uma função que leia 2 números, após a leitura somar e retornar o resultado.
// Está função deverá ser chamado através do programa principal. Exibir conteúdo retornado.
#include <stdio.h>
#include <conio.h>

int soma_func(){
	int num1, num2, soma;
	printf("Informe o numero 1:");
	scanf("%d", &num1);
	printf("Informe o numero 2:");
	scanf("%d", &num2);
	soma = num1 + num2;
	return soma;
}

void main(){
	int ret;
	printf("\n\n<<Funcao>>\n\n");
	ret = soma_func();
	printf("Soma: %d", ret);
}
