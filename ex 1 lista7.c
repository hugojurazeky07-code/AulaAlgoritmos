//1.	Escreva um procedimento que receba por parâmetro os valores de A e  B e retorne os valores
//invertidos, ou seja, A receberá o conteúdo de B e B receberá o conteúdo de A. Os parâmetros deverão ser por referência.
#include <stdio.h>
#include <conio.h>

void inveter_valores(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
void main(){
	int a,b;
	printf("Informe A: ");
	scanf("%d", &a);
	printf("Informe B: ");
	scanf("%d", &b);
	inveter_valores(&a ,&b);
	printf("\nValor de A: %d", a);
	printf("\nValor de B: %d", b);
}
