//1.	Carregar uma matriz 3x3 e preencher com valores de 10 em 10 e exibir a soma da matriz no final.
#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

void carregar_matriz(int matriz[TL][TC]){
	int l, c, num = 10;
	printf("<<<Carregar Matriz>>>\n\n");
	for (l=0; l <TL; l++){
		for (c=0; c <TC; c++){
		  matriz[l][c] = num;
		  num += 10;
		}
	}
}
void exibir_matriz(int matriz[TL][TC]){
	int l, c, soma = 0;
	printf("<<<Exibir Matriz>>>\n");
	for (l=0; l<TL; l++){
		for (c=0; c<TC; c++){
			printf("\nMatriz[%d][%d] = %d", l, c, matriz[l][c]);
			soma += matriz[l][c];
        }
    }
    printf("\n\nSoma da matriz: %d", soma);
}
void main(){
	int matriz[TL][TC];
	carregar_matriz(matriz);
	exibir_matriz(matriz);
}
