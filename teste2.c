#include <stdio.h>
#include <conio.h>

// #define TF 50 //Contasnte, o valor de TF não muda!!!

void main(){
	
	int vet[5], i;
	//int vet[TF], i;
	
	for(i=0; i<= 5-1; i++)
	//for(i=0; i < TF; i++)
	
	{
		printf("Informe a pos. %d do vetor: ",i);
		scanf("%d", &vet[i]);
	}
	for(i=0; i <= 5-1; i++){
		printf("\nVetor na pos. %d: %d", vet[i]);
	}
}
