//3.	Preencher um vetor B de 5 elementos com 1 se o número informado pelo usuário ímpar e com 0 se for par. Escrever o vetor B após o seu total preenchimento.

#include <stdio.h>
#define TF 5

void carregarVetor(int vet[TF])
{
	int i, num;
	printf("Carregando vetor: \n");
	
	for(i=0; i < TF; i++)
	{
		printf("\nInforme a pos. %d do vetor: ",i);
		scanf("%d", &num);
		
		if (num %2 == 0){
			printf("o numero eh par");
			vet[i] = 0;
		} 
	    else
	    {
			printf("o numero eh inpar");
			vet[i] = 1;
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
