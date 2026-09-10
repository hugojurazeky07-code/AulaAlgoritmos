//4.	Ler um vetor C de 10 elementos inteiros, trocar todos os valores negativos do vetor C por 0. Escrever o vetor C modificado.
#include <stdio.h>
#define TF 10

void carregarVetor(int vet[TF])
{
	int i, num;
	printf("Carregando vetor: \n");
	
	for(i=0; i < TF; i++)
	{
		printf("\nInforme a pos. %d do vetor: ",i);
		scanf("%d", &num);
		
		if (num < 0 ){
			vet[i] = 0;
		} 
	    else
	    {
			vet[i] = num;
		}
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
