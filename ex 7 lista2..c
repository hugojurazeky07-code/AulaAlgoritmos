//7 - Escreva um procedimento que ao realizar a leitura de um número qualquer,
// seja capaz de verificar se o mesmo é positivo ou negativo. Fazer a chamada no programa principal.
#include <stdio.h>
#include <conio.h>

void Leitura_Neg_Pos()
{
	int numero;
	
	printf("Informe um numero");
	scanf("%d", &numero);
	
	if(numero > 0 ){
		printf("O numero e Positivo.");}
	else		
		if(numero < 0){
			printf("O numero e Negativo.");
		}
		
	
}

void main(){
	
	Leitura_Neg_Pos();
}
