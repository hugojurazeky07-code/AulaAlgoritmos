#include <stdio.h>
#include <conio.h>

//2.	Escreva uma função que receba a data de nascimento de uma pessoa (DataNascimento), calcule e retorne a idade.

int Calcular_idade(int Ano_atual, int Ano_Nas){
	int Idade;
	Idade = Ano_atual - Ano_Nas;
	return Idade;
}
void main(){
	int Ano_atual, Ano_Nas, ret;
	printf("Informe ano Atual: ");
	scanf("%d", &Ano_atual);
	printf("Informe ano Nascimento: ");
	scanf("%d", &Ano_Nas);
	ret = Calcular_idade(Ano_atual,Ano_Nas);
	printf("\n\nIdade: %d", ret);
}

