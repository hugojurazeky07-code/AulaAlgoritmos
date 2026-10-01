//2.	Carregar uma matriz 4x4 com números fornecidos pelo usuário. Ao final ler um número informado pelo usuário e procurar se o mesmo está na matriz.
#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

void carregar_matriz(int matriz[TL][TC]){
	int l, c;
	printf("<<<Carregar Matriz>>>\n\n");
	for (l=0; l <TL; l++){
		for (c=0; c <TC; c++){
			printf("Informe Matriz[%d][%d]: ",l ,c);
			scanf("%d", &matriz[l][c]);
		}
	}
}

void exibir_matriz(int matriz[TL][TC]){
	int l, c, numero;
	printf("Informe numero que deseja procurar:");
	scanf("%d", &numero);
	for (l=0; l<TL; l++){
		for (c=0; c<TC; c++){
			printf("\nMatriz[%d][%d] = %d", l, c, matriz[l][c]);
    		if (numero == matriz[l][c]){
    		printf(" <<<Numero achado na Matriz>>>", matriz[l][c]);
	 }
    }
  }
}

int main(){
	int matriz[TL][TC];
	carregar_matriz(matriz);
	exibir_matriz(matriz);
}
