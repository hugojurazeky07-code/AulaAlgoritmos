//6.	Criar um programa para ler um vetor de dez números reais; e mostrar os números contidos nos índices pares.
#include <stdio.h>
#include <conio.h>

#define TF 10

void carregar_vetor(float vet[TF]){
	int i;
	printf("<<Carregar Vetor>>\n\n");
	for (i=0; i<TF; i++){
		
		printf("Informe Vet[%d]: ", i);
		scanf("%f", &vet[i]);
	}
}

void exibir_vetor(float vet[TF]){
	int i;
	printf("\n\n<<Exibir Vetor>>\n");
	for (i=0; i<TF; i++){
		if (i% 2 == 0){
			printf("\nVetor[%d]: %0.2f", i, vet[i]);
		}
		  
	}
}

void main(){
	float vet[TF];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
