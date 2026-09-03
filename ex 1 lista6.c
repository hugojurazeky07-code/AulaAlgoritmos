#include <stdio.h>
#include <conio.h>

//1.	Escreva uma função, que receba por parâmetro dois valores A e B, calcule e retorne a soma dos valores

int calcular_soma(int a, int b){
	int soma;
	soma = a + b;
	return soma;
}
void main(){
	int a, b, ret;
	printf("Informe A: ");
	scanf("%d", &a);
	printf("Informe B: ");
	scanf("%d", &b);
	ret = calcular_soma(a,b);
	printf("\n\nSoma: %d", ret);
}

