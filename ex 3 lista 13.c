//3.	Ler uma matriz SOMA 4x4, calcular e escrever as seguintes somas:
//a) da linha 3
//b) da coluna 2
//c) de todos os elementos da matriz

#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

void carregar_matriz(int matriz[TL][TC]){
	int l, c, num = 0;
	printf("<<<Carregar Matriz>>>\n\n");
	for (l=0; l <TL; l++){
		for(c=0; c<TC; c++){
			printf("Informe Matriz[%d][%d]: ",l ,c);
			scanf("%d", &matriz[l][c]);
		}
	}
}

void exibir_matriz(int matriz[TL][TC]){
	int l, c, soma1 = 0, soma2 = 0, soma3 = 0;
	printf("<<<Exibir Matriz>>>\n");
	for (l=0; l<TL; l++){
		for (c=0; c<TC; c++){
			printf("\nMatriz[%d][%d] = %d", l, c, matriz[l][c]);
			soma1 += matriz[l][c];
			if ( l== 3)
				soma2 += matriz[l][c];
			if ( c == 2)
				soma3 += matriz[l][c] ;
        }
    }
    printf("\n\nSoma da linha 3: %d", soma2);
    printf("\n\nSoma da coluna 2: %d", soma3);
    printf("\n\nSoma da matriz: %d", soma1);
}
void main(){
	int matriz[TL][TC];
	carregar_matriz(matriz);
	exibir_matriz(matriz);
}
