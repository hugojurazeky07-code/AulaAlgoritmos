//7.	Construir um programa para ler um vetor de oito números inteiros; e mostrar os números ímpares.
#include <stdio.h>
#include <conio.h>

#define TF 8

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
		if (vet[i] % 2 != 0){
			printf("\nVetor[%d]: %d", i, vet[i]);
		}
		  
	}
}

void main(){
	float vet[TF];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
