//4 - Escreva uma função que retorne a idade de uma pessoa, para
// calcular a idade será necessário conhecer o ano de nascimento e o ano atual. Retornar e exibir no programa principal.
#include <stdio.h>
#include <conio.h>

int subritacao(){
	int anoNas, anoAtual, idade;
	printf("Informe o Ano de Nascimento:");
	scanf("%d", &anoNas);
	printf("Informe o Ano de Atual:");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNas;
	return idade;
}
void main(){
	int ret;
	ret = subritacao();
	printf("subritacao: %d", ret);
}
