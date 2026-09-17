//9.	Fazer um programa para ler um vetor de vinte números inteiros positivos e um número qualquer.
// Mostrar quantas vezes o número lido por último aparece no vetor.
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

void encontrar_elemento_no_vetor(int vet[TF]){
	int i, num, cont = 0;
	
	printf("\n\nInforme 1 numero qualquer\n");
	scanf("%d", &num);
	
	for (i=0; i<TF; i++){
		if (vet[i]== num){
			printf("\nEntrado em Vetor[%d]: %d", i, vet[i]);
			cont++;
		}
	}
	printf("\n\nQtde de vezes encontrado: %d", cont);
}


void main(){
	float vet[TF];
	carregar_vetor(vet);
	encontrar_elemento_no_vetor(vet);
}
