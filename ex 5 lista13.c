////5.Faça uma função que recebe, por parâmetro, uma matriz A(7,7) e retorna a soma dos elementos da linha 5 e da coluna 3.

#include <stdio.h>
#define TL 4
#define TC 4

void carregar_matriz(int mat[TL][TC])
{
	int l, c;
	printf("\n<<<Carregar Matriz>>>\n\n");
	for (l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
			printf("\nInforme Matriz[%d][%d]: ", l,c);
			scanf("%d", &mat[l][c]);
		}
	}	
}

int calcularLinhaColuna(int mat[TL][TC], int *soma_coluna)
{
	int l, c, soma_linha=0;
	printf("\n<<<Exibir Matriz>>>");
	for(l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
			if(c==3)
				soma_linha += mat[l][c];
			if(l == 3) //voltar pra 5
				*soma_coluna += mat[l][c];
		}
	}
	return soma_linha;
}

void main()
{
	int mat[TL][TC], soma_coluna = 0, soma_linha;
	carregar_matriz(mat);
	soma_linha = calcularLinhaColuna(mat, &soma_coluna);
	printf("\nExibindo resultados:\n");
	printf("\nTotal linha: %d", soma_linha);
	printf("\nTotal coluna: %d", soma_coluna);
	printf("\nSoma total de Linha + Coluna: %d", soma_linha + soma_coluna);
}
