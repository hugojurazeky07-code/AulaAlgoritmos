//2 - Escreva um procedimento que leia seu nome e após a leitura e exiba o nome lido. Este procedimento deverá ser chamado através do programa principal.
#include <stdio.h>
#include <conio.h>

void ler_exibir_nome()
{
	char nome[100];
	printf("Infome o nome:");
	scanf("%s", nome);
	printf("Nome lido: %s", nome);
}

void main()
{
     ler_exibir_nome();
  
}

