// 1.	Carregar um vetor X de 10 elementos com os valores de 10 em 10 e exibi-lo no final.

#include <stdio.h>

//Constantes
#define TF 10

void carregarVetor(int vet[TF])
{
	int i;
	int num = 10; 
	
	printf("Carregando vetor: \n");	
	for(i=0; i < TF; i++)
	{
	vet[i] = num;
	num = num +10;
	}
}

void exibirVetor(int vet[TF])
{
	int i;
	printf("\n\nExibindo vetor: \n");
	for(i=0; i < TF; i++)
	{
		printf("\nVetor na pos. %d: %d", i, vet[i]);
	}
}

void main()
{
	int vet[TF], i;
	
	carregarVetor(vet);
	exibirVetor(vet);
}

