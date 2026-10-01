#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

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
	int l, c;
	printf("<<<Exibir Matriz>>>\n");
	for (l=0; l<TL; l++){
		for (c=0; c<TC; c++){
			printf("\nMatriz[%d][%d] = %d", l, c, matriz[l][c]);
        }
    }
}
int main(){
	int matriz[TL][TC];
	carregar_matriz(matriz);
	exibir_matriz(matriz);
}
