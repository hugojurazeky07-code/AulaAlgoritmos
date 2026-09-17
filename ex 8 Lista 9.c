//8.	Elaborar um programa para ler um vetor de cinco elementos inteiros
// e verificar se existem elementos iguais a 30. Se existir, escrever as posições em que estão armazenados.
#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vet[TF]){
	int i;
	printf("<<Carregar Vetor>>\n\n");
	for (i=0; i<TF; i++){
		
		printf("Informe Vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
}

void exibir_vetor(int vet[TF]){
	int i;
	printf("\n\n<<Exibir Vetor>>\n");
	for (i=0; i<TF; i++){
		if (vet[i] == 30){
			printf("\nVetor[%d]: %d", i, vet[i]);
		}
		  
	}
}

void main(){
	float vet[TF];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
