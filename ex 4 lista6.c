#include <stdio.h>
#include <conio.h>

//4.	Escreva uma função que receba a Largura e o Comprimento do quadrado/retângulo, calcule e retorne a área.

float calcular_Area(float Largura, float Comprimento){

	float area;
	area = Largura * Comprimento;
	
	return area;
}
void main(){
	float Largura, Comprimento, ret;
	printf("Informe Largura: ");
	scanf("%f", &Largura);
	printf("Informe Comprimento: ");
	scanf("%f", &Comprimento);
	ret = calcular_Area(Largura,Comprimento);
	printf("\n\nArea: %f", ret);
}

