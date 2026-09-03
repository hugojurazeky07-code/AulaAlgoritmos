#include <stdio.h>
#include <conio.h>

//10.	Escreva um procedimento que receba a data de nascimento de uma pessoa (DataNascimento), calcule e exiba a idade.

void calcular_idade(int Ano_atual, int Ano_Nas){
	int idade;
	idade = Ano_atual - Ano_Nas;
	printf("Idade: %d", idade);
}
void main(){
	int Ano_Nas, Ano_atual;
	printf("Informe ano Atual: ");
	scanf("%d", &Ano_atual);
	printf("Informe ano Nascimento: ");
	scanf("%d", &Ano_Nas);
	calcular_idade(Ano_atual,Ano_Nas);
}
