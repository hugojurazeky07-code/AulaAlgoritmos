//2.	Preencher um vetor A de 5 elementos com os números fornecidos pelos usuários.  Escrever o vetor A após o seu total preenchimento.
#include <stdio.h>
#define TF 5

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
	
	
	carregarVetor(vet);
	exibirVetor(vet);
}
