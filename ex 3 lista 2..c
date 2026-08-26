#include <stdio.h>
#include <conio.h>

void ler_exibir_nome_sobrenome()
{
	char nome[100];
	char sobrenome[100];
	printf("Infome o nome:");
	scanf("%s", nome);
	printf("Informe o sobrenome:");
	scanf("%s", sobrenome);
	printf("Nome lido: %s %s", nome, sobrenome);
}

void main()
{
     ler_exibir_nome_sobrenome();
	     
}

