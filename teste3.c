//Bibliotecas
#include <stdio.h>

//Constantes
#define TF 5

//Modulos (Funcoes, Procedimentos)

void carregarVetor(int vet[TF])
{
	int i;
	printf("Carregando vetor: \n");
	
	for(i=0; i < TF; i++)
	{
		printf("\nInforme a pos. %d do vetor: ",i);
		scanf("%d", &vet[i]);
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
	//Vetor não passa o tamanho por parametro. 
	//Vetor já é parametro por referencia, portanto não precisa do &.
	
	carregarVetor(vet);
	exibirVetor(vet);
}
