//2 - Escreva uma função que leia 4 números, após a leitura
// multiplique todos e retorne o resultado. Está função deverá ser chamada através do programa principal. Exibir conteúdo retornado.
#include <stdio.h>
#include <conio.h>
int multiplica(){
	int num1, num2, num3, num4, mult;
	printf("Informe o numero 1:");
	scanf("%d", &num1);
	printf("Informe o numero 2:");
	scanf("%d", &num2);
	printf("Informe o numero 3:");
	scanf("%d", &num3);
	printf("Informe o numero 4:");
	scanf("%d", &num4);
	mult = num1 * num2 * num3 * num4;
	return mult;
}
void main(){
	int ret;
	ret = multiplica();
	printf("mult: %d", ret);
}
