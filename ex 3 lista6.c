#include <stdio.h>
#include <conio.h>

//3.	Escreva uma função que receba 2 parâmetros (Nota1 e Nota2) calcule e retorne a média.

float calcular_Media(float Nota1, float Nota2){

	float soma, media;
	soma = Nota1 + Nota2;
	media = soma / 2;
	
	return media;
}
void main(){
	float Nota1, Nota2, ret;
	printf("Informe Nota1: ");
	scanf("%f", &Nota1);
	printf("Informe Nota2: ");
	scanf("%f", &Nota2);
	ret = calcular_Media(Nota1,Nota2);
	printf("\n\nMedia: %f", ret);
}

