//5.	Ler um vetor D de 4 elementos. Criar um vetor E, com todos os elementos de D na ordem inversa,
// ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. Escrever todo o vetor D e todo o vetor E.
#include <stdio.h>
#include <conio.h>
#define TF 4

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
		printf("\nVetor[%d]: %d", i, vet[i]);
	}
}

void inverter_vetor(int vet[TF], int vetorInvertido[TF])
{
	int i, j;
	for(i=0, j=TF-1; i<TF; i++, j--)
	{
		vetorInvertido[j] = vet[i];
	}
}


void main(){
	int vet[TF], vetorInvertido[TF];
	carregar_vetor(vet);
	inverter_vetor(vet, vetorInvertido);
	exibir_vetor(vetorInvertido);
	exibir_vetor(vet);
}
	

