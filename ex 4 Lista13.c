//4.	Carregar uma matriz 3x3 com número inteiros gerar uma nova matriz com os números da matriz carregada, multiplicados por 2.
#include<stdio.h>
#define TL 3
#define TC 3

void carregar_matriz(int mat[TL][TC])

{
	int l, c;
	printf("<<<Carregar Matriz>>>\n\n");
	for (l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
			printf("Informe Matriz[%d][%d]: ", l,c);

			scanf("%d", &mat[l][c]);
		}
	}	
}

void multiplicarMatriz(int mat[TL][TC], int matMult[TL][TC])
{
	int l, c;
	printf("<<<Multiplicando Matriz>>>\n\n");
	for (l=0; l<TL; l++)
	{
		for (c=0; c<TC; c++)
		{
			matMult[l][c] = mat[l][c] * 2; 
		}
	}
}

void exibir_matriz(int mat[TL][TC])
{

	int l, c;
	printf("\n\n<<<Exibir Matriz Multiplicada>>>");
	for(l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
			printf("\nMatriz[%d][%d] = %d", l, c, mat[l][c]);
		}
	}
}

void main()
{
	int mat[TL][TC], matMult[TL][TC];
	carregar_matriz(mat);
	multiplicarMatriz(mat, matMult);
	exibir_matriz(matMult);
	
}
