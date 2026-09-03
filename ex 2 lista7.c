//2.	Escreva um procedimento que receba a data de nascimento de uma pessoa (DataNascimento), a data atual calcule a idade e retorne (Idade) por parâmetro.
#include <stdio.h>
#include <conio.h>

int Calcular_idade(int Ano_atual, int Ano_Nas, int *Idade){
	*Idade = Ano_atual - Ano_Nas;

}
void main(){
	int Ano_atual, Ano_Nas, Idade;
	printf("Informe ano Atual: ");
	scanf("%d", &Ano_atual);
	printf("Informe ano Nascimento: ");
	scanf("%d", &Ano_Nas);
	Calcular_idade(Ano_atual,Ano_Nas,&Idade);
	printf("\n\nIdade: %d", Idade);
}

